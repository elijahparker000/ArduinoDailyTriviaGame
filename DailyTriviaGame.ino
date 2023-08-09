// include the library code:
#include <LiquidCrystal.h>
#include <DS3231.h>


//there is so much text to store that I have to use the flash memory on the arduino to store it. declaring each question and answer individually before 
//making them into arrays is part of that process.
const char string_question0[] PROGMEM = "What is c in Einstein's famous equation?";
const char string_question1[] PROGMEM = "Which space shuttle burned up in the atmosphere upon re-entry?";
const char string_question2[] PROGMEM = "What is the hottest planet in the solar system?";
const char string_question3[] PROGMEM = "What percentage of the atmosphere is Nitrogen?";
const char string_question4[] PROGMEM = "True or False: pi can be written as a fraction.";
const char string_question5[] PROGMEM = "Who is best known for his laws of planetary motion?";
const char string_question6[] PROGMEM = "True or False: sound travels faster in air than in water.";
const char string_question7[] PROGMEM = "In what country is the Suez Canal?";
const char string_question8[] PROGMEM = "Who said, I think therefore I am?";
const char string_question9[] PROGMEM = "What organ allows a Betta to breathe air?";
const char string_question10[] PROGMEM = "This one is just a reminder that I love you! I hope you have a great day today!  :)";
const char string_question11[] PROGMEM = "What Beach Boys song did Paul McCartney call the greatest song ever written?";
const char string_question12[] PROGMEM = "What volcano destroyed Pompeii in 79 AD?";
const char string_question13[] PROGMEM = "What lies between the orbits of Mars and Jupiter?";
const char string_question14[] PROGMEM = "What determines the color of visible light?";
const char string_question15[] PROGMEM = "True or False: there is no sound in space.";
const char string_question16[] PROGMEM = "What is the first animal to ever be cloned?";
const char string_question17[] PROGMEM = "At what rate do things fall on Earth?";
const char string_question18[] PROGMEM = "What is a Geiger Counter used to measure?";
const char string_question19[] PROGMEM = "What is density?";
const char string_question20[] PROGMEM = "1011 is a binary number. What is it in base 10?";
const char string_question21[] PROGMEM = "Approximately how old is Earth?";
const char string_question22[] PROGMEM = "The hominin skeleton nicknamed Lucy is of what species?";
const char string_question23[] PROGMEM = "It's currently December 17 as I'm writing this. You won't see it for more than a month. I love you!";
const char string_question24[] PROGMEM = "Who sings Like a Rolling Stone?";
const char string_question25[] PROGMEM = "What year did humans first visit the Moon?";
const char string_question26[] PROGMEM = "What is the SI unit of electrical resistance?";
const char string_question27[] PROGMEM = "What is the most important chess piece?";
const char string_question28[] PROGMEM = "What are the gaps between nerve cells called?";
const char string_question29[] PROGMEM = "Who is known for running through the streets yelling Eureka?";
const char string_question30[] PROGMEM = "Approximately how many neutrinos pass through your body every second?";
const char string_question31[] PROGMEM = "What are the chances of a quarter landing on heads five times in a row?";
const char string_question32[] PROGMEM = "What is the name of the plane that dropped the first atomic bomb on Japan?";
const char string_question33[] PROGMEM = "Who stayed in orbit around the Moon while the first Moon landing took place?";
const char string_question34[] PROGMEM = "What are the two types of photoreceptors in the retina called?";
const char string_question35[] PROGMEM = "How fast does light travel?";
const char string_question36[] PROGMEM = "What planet could float in water?";
const char string_question37[] PROGMEM = "What color has the longest wavelength in the visible spectrum?";
const char string_question38[] PROGMEM = "What is pi?";
const char string_question39[] PROGMEM = "What scale is used to measure the hardness of minerals?";
const char string_question40[] PROGMEM = "What is the largest bone in the human body?";
const char string_question41[] PROGMEM = "What is the smallest time interval it is theoretically possible to measure?";
const char string_question42[] PROGMEM = "A light-year is a measurment of what?";
const char string_question43[] PROGMEM = "What metal is the best conductor of electricity?";
const char string_question44[] PROGMEM = "Who was the first American woman in space?";
const char string_question45[] PROGMEM = "What is the longest nerve in the human body?";
const char string_question46[] PROGMEM = "Which galaxy is closest to the Milky Way?";
const char string_question47[] PROGMEM = "Atoms that are of the same element but have different atomic masses are known as what?";
const char string_question48[] PROGMEM = "Olympus Mons is a large volcano on which planet?";
const char string_question49[] PROGMEM = "What is the seventh planet from the sun?";
const char string_question50[] PROGMEM = "Who founded Microsoft?";
const char string_question51[] PROGMEM = "What is the SI unit of electrical inductance?";
const char string_question52[] PROGMEM = "How many points is a safety worth in football?";
const char string_question53[] PROGMEM = "What islands were extensively studied by Charles Darwin?";
const char string_question54[] PROGMEM = "At what temperature are Farenheit and Celsius equal?";
const char string_question55[] PROGMEM = "Today is a trivia break. Have a good day!";
const char string_question56[] PROGMEM = "In the nitrogen cycle, what less toxic chemical is ammonia turned into?";
const char string_question57[] PROGMEM = "How strong is gravity on the Moon compared to on Earth?";
const char string_question58[] PROGMEM = "What is programmed cell death called?";
const char string_question59[] PROGMEM = "What type of pulses does SONAR use?";
const char string_question60[] PROGMEM = "How long was a day when the dinosaurs were alive?";
const char string_question61[] PROGMEM = "How many faces does a dodecahedron have?";
const char string_question62[] PROGMEM = "What component would you use to open and close a circuit?";
const char string_question63[] PROGMEM = "How many centimeters are there in an inch?";
const char string_question64[] PROGMEM = "True or False: narwhals are real.";
const char string_question65[] PROGMEM = "How much more massive is a proton than an electron?";
const char string_question66[] PROGMEM = "What covers your windpipe to keep out food particles?";
const char string_question67[] PROGMEM = "What is torque?";
const char string_question68[] PROGMEM = "What is the splittin of atomic nuclei called?";
const char string_question69[] PROGMEM = "Ha this question is number 69.";
const char string_question70[] PROGMEM = "What type of electricity did Tesla work with?";
const char string_question71[] PROGMEM = "Approximately how fast does sound travel in the atmosphere?";
const char string_question72[] PROGMEM = "According to Einstein, what is the fastest thing in the universe?";
const char string_question73[] PROGMEM = "True or False: the further from the Sun a planet orbits, the longer its year is.";
const char string_question74[] PROGMEM = "To which part of physics does Archimedes Principle refer?";
const char string_question75[] PROGMEM = "At what temperature does water boil?";
const char string_question76[] PROGMEM = "True or False: you weigh less standing at the equator than you do at the North Pole.";
const char string_question77[] PROGMEM = "What keeps the Earth in orbit around the Sun?";
const char string_question78[] PROGMEM = "What were the nicknames for the two atomic bombs dropped on Japan in WW2?";
const char string_question79[] PROGMEM = "What is the point on which a lever pivots?";
const char string_question80[] PROGMEM = "How many meters are in a micrometer?";
const char string_question81[] PROGMEM = "Who was the lead singer for Queen?";
const char string_question82[] PROGMEM = "What is the farthest manmade satellite from Earth?";
const char string_question83[] PROGMEM = "What is the SI unit of electrical capacitance?";
const char string_question84[] PROGMEM = "What branch of mathematics did Isaac Newton invent/discover?";
const char string_question85[] PROGMEM = "What is significant about the name Google?";
const char string_question86[] PROGMEM = "Ohm's Law states that voltage is equal to...?";
const char string_question87[] PROGMEM = "What is any number (excluding zero) to the power of zero equal to?";
const char string_question88[] PROGMEM = "I LOVE YOU! :)";
const char string_question89[] PROGMEM = "What was the name of the ship Charles Darwin sailed on?";
const char string_question90[] PROGMEM = "What band sings Peaceful Easy Feeling?";
const char string_question91[] PROGMEM = "True or False: it is harder to get something moving than it is to keep it moving.";
const char string_question92[] PROGMEM = "The Strait of Gibraltar lies between what two countries?";
const char string_question93[] PROGMEM = "What is absolute zero?";
const char string_question94[] PROGMEM = "True or False: electricity flows in closed circuits and not in open circuits.";
const char string_question95[] PROGMEM = "How many meters are in a mile?";
const char string_question96[] PROGMEM = "Who invented the telephone?";
const char string_question97[] PROGMEM = "Dr. Livingstone explored what continent?";
const char string_question98[] PROGMEM = "Who painted The Scream?";
const char string_question99[] PROGMEM = "One kilogram is how many pounds? (on Earth)";
const char string_question100[] PROGMEM = "Who crossed the Rubicon?";
const char string_question101[] PROGMEM = "The buoyant force on an object is equal to...?";
const char string_question102[] PROGMEM = "Where is DNA stored in the cell?";
const char string_question103[] PROGMEM = "What river runs through the Grand Canyon?";
const char string_question104[] PROGMEM = "In electronics, which is NOT a type of logic gate?";
const char string_question105[] PROGMEM = "What are kilograms a measurement of?";
const char string_question106[] PROGMEM = "What is the SI unit of electrical current?";
const char string_question107[] PROGMEM = "What is the name of the Beatles debut album?";
const char string_question108[] PROGMEM = "Just another reminder that I love you SO MUCH!";
const char string_question109[] PROGMEM = "Who is the Greek god of the sea?";
const char string_question110[] PROGMEM = "How many people have walked on the Moon?";
const char string_question111[] PROGMEM = "Who is known as the father of the atomic bomb?";
const char string_question112[] PROGMEM = "Good luck on any finals you have left! I LOVE YOU!";
const char string_question113[] PROGMEM = "A unit of heat energy is called what?";
const char string_question114[] PROGMEM = "Which planet has the most moons?";
const char string_question115[] PROGMEM = "Where is Machu Picchu located?";
const char string_question116[] PROGMEM = "What Italian scientist died under house arrest for his belief in heliocentrism?";
const char string_question117[] PROGMEM = "How fast is the ISS travelling?";
const char string_question118[] PROGMEM = "Approximately how old is the universe?";
const char string_question119[] PROGMEM = "Who painted The Last Supper?";
const char string_question120[] PROGMEM = "Which disease has been eradicated?";
const char string_question121[] PROGMEM = "True or False: light travels at different speeds depending on the medium.";
const char string_question122[] PROGMEM = "What is the first derivative of velocity?";
const char string_question123[] PROGMEM = "As far as I know at the time of writing this, today is my last day of work! That means I'll be back in Auburn soon. I have missed you so much. I LOVE YOU!!!";

const char string_answer0A[] PROGMEM = "The speed of light";
const char string_answer0B[] PROGMEM = "Mass";
const char string_answer0C[] PROGMEM = "Energy";
const char string_answer1A[] PROGMEM = "Challenger";
const char string_answer1B[] PROGMEM = "Columbia";
const char string_answer1C[] PROGMEM = "Discovery";
const char string_answer2A[] PROGMEM = "Venus";
const char string_answer2B[] PROGMEM = "Saturn";
const char string_answer2C[] PROGMEM = "Mercury";
const char string_answer3A[] PROGMEM = "24%";
const char string_answer3B[] PROGMEM = "78%";
const char string_answer3C[] PROGMEM = "89%";
const char string_answer4A[] PROGMEM = "Don't pick me";
const char string_answer4B[] PROGMEM = "True";
const char string_answer4C[] PROGMEM = "False";
const char string_answer5A[] PROGMEM = "Newton";
const char string_answer5B[] PROGMEM = "Kepler";
const char string_answer5C[] PROGMEM = "Copernicus";
const char string_answer6A[] PROGMEM = "True";
const char string_answer6B[] PROGMEM = "False";
const char string_answer6C[] PROGMEM = "Don't pick me";
const char string_answer7A[] PROGMEM = "Costa Rica";
const char string_answer7B[] PROGMEM = "Spain";
const char string_answer7C[] PROGMEM = "Egypt";
const char string_answer8A[] PROGMEM = "Socrates";
const char string_answer8B[] PROGMEM = "Nietzsche";
const char string_answer8C[] PROGMEM = "Descartes";
const char string_answer9A[] PROGMEM = "Lungs";
const char string_answer9B[] PROGMEM = "Labyrinth";
const char string_answer9C[] PROGMEM = "Gills";
const char string_answer10A[] PROGMEM = "Pick me :)";
const char string_answer10B[] PROGMEM = "Don't pick me";
const char string_answer10C[] PROGMEM = "Don't pick me either";
const char string_answer11A[] PROGMEM = "God Only Knows";
const char string_answer11B[] PROGMEM = "Wouldn't It Be Nice";
const char string_answer11C[] PROGMEM = "Darlin'";
const char string_answer12A[] PROGMEM = "Krakatoa";
const char string_answer12B[] PROGMEM = "Mount Vesuvius";
const char string_answer12C[] PROGMEM = "Mount Saint Helens";
const char string_answer13A[] PROGMEM = "Neptune";
const char string_answer13B[] PROGMEM = "Asteroid Belt";
const char string_answer13C[] PROGMEM = "Uranus";
const char string_answer14A[] PROGMEM = "Refractive Indices";
const char string_answer14B[] PROGMEM = "Speed";
const char string_answer14C[] PROGMEM = "Wavelength";
const char string_answer15A[] PROGMEM = "True";
const char string_answer15B[] PROGMEM = "False";
const char string_answer15C[] PROGMEM = "Don't pick me";
const char string_answer16A[] PROGMEM = "Elvis the Mosquito";
const char string_answer16B[] PROGMEM = "Dolly the Sheep";
const char string_answer16C[] PROGMEM = "Carol the Cow";
const char string_answer17A[] PROGMEM = "9.81 meters per second squared";
const char string_answer17B[] PROGMEM = "9.81 meters per second";
const char string_answer17C[] PROGMEM = "9.81 meters per second cubed";
const char string_answer18A[] PROGMEM = "The Geiger Rate of Change";
const char string_answer18B[] PROGMEM = "Light Intensity";
const char string_answer18C[] PROGMEM = "Radiation";
const char string_answer19A[] PROGMEM = "Mass per Volume";
const char string_answer19B[] PROGMEM = "Volume per Mass";
const char string_answer19C[] PROGMEM = "Bouyant Force Squared";
const char string_answer20A[] PROGMEM = "9";
const char string_answer20B[] PROGMEM = "10";
const char string_answer20C[] PROGMEM = "11";
const char string_answer21A[] PROGMEM = "200 million years";
const char string_answer21B[] PROGMEM = "4.5 billion years";
const char string_answer21C[] PROGMEM = "13.8 billion years";
const char string_answer22A[] PROGMEM = "Homo neanderthalensis";
const char string_answer22B[] PROGMEM = "Australopithecus afarensis";
const char string_answer22C[] PROGMEM = "Homo habilis";
const char string_answer23A[] PROGMEM = "Pick me";
const char string_answer23B[] PROGMEM = "Don't pick me";
const char string_answer23C[] PROGMEM = "Don't pick me either";
const char string_answer24A[] PROGMEM = "The Rolling Stones";
const char string_answer24B[] PROGMEM = "John Prine";
const char string_answer24C[] PROGMEM = "Bob Dylan";
const char string_answer25A[] PROGMEM = "1969";
const char string_answer25B[] PROGMEM = "1972";
const char string_answer25C[] PROGMEM = "1975";
const char string_answer26A[] PROGMEM = "Ohms";
const char string_answer26B[] PROGMEM = "Amperes";
const char string_answer26C[] PROGMEM = "Farads";
const char string_answer27A[] PROGMEM = "Rook";
const char string_answer27B[] PROGMEM = "Queen";
const char string_answer27C[] PROGMEM = "King";
const char string_answer28A[] PROGMEM = "Synapses";
const char string_answer28B[] PROGMEM = "Cilium";
const char string_answer28C[] PROGMEM = "Chitin";
const char string_answer29A[] PROGMEM = "Archimedes";
const char string_answer29B[] PROGMEM = "Plato";
const char string_answer29C[] PROGMEM = "Diogenes";
const char string_answer30A[] PROGMEM = "100 Billion";
const char string_answer30B[] PROGMEM = "100 Trillion";
const char string_answer30C[] PROGMEM = "100 Million";
const char string_answer31A[] PROGMEM = "3.125%";
const char string_answer31B[] PROGMEM = "1.5625%";
const char string_answer31C[] PROGMEM = "6.25%";
const char string_answer32A[] PROGMEM = "Red Baron";
const char string_answer32B[] PROGMEM = "Kitty Hawk";
const char string_answer32C[] PROGMEM = "Enola Gay";
const char string_answer33A[] PROGMEM = "Buzz Aldrin";
const char string_answer33B[] PROGMEM = "Alan Shepard";
const char string_answer33C[] PROGMEM = "Michael Collins";
const char string_answer34A[] PROGMEM = "Reds and Blues";
const char string_answer34B[] PROGMEM = "Rods and Cones";
const char string_answer34C[] PROGMEM = "Eukaryotic and Aeukaryotic";
const char string_answer35A[] PROGMEM = "300,000,000 meters per second";
const char string_answer35B[] PROGMEM = "150,000,000 meters per second";
const char string_answer35C[] PROGMEM = "684,000,000 meters per second";
const char string_answer36A[] PROGMEM = "Vulcan";
const char string_answer36B[] PROGMEM = "Saturn";
const char string_answer36C[] PROGMEM = "Neptune";
const char string_answer37A[] PROGMEM = "Purple";
const char string_answer37B[] PROGMEM = "Black";
const char string_answer37C[] PROGMEM = "Red";
const char string_answer38A[] PROGMEM = "Ratio of a circle's diameter to its circumference";
const char string_answer38B[] PROGMEM = "Ratio of a circle's circumference to its diameter";
const char string_answer38C[] PROGMEM = "Ratio of a circle's radius to its area";
const char string_answer39A[] PROGMEM = "Moh's Scale";
const char string_answer39B[] PROGMEM = "Richter Scale";
const char string_answer39C[] PROGMEM = "Henry's Scale";
const char string_answer40A[] PROGMEM = "Ulna";
const char string_answer40B[] PROGMEM = "Femur";
const char string_answer40C[] PROGMEM = "Zygomatic Bone";
const char string_answer41A[] PROGMEM = "3.4 picoseconds";
const char string_answer41B[] PROGMEM = "1 Planck Time";
const char string_answer41C[] PROGMEM = "7 zeptoseconds";
const char string_answer42A[] PROGMEM = "Speed";
const char string_answer42B[] PROGMEM = "Time";
const char string_answer42C[] PROGMEM = "Distance";
const char string_answer43A[] PROGMEM = "Tin";
const char string_answer43B[] PROGMEM = "Copper";
const char string_answer43C[] PROGMEM = "Silver";
const char string_answer44A[] PROGMEM = "Sally Ride";
const char string_answer44B[] PROGMEM = "Harriet Tubman";
const char string_answer44C[] PROGMEM = "Shannon Lucid";
const char string_answer45A[] PROGMEM = "Optic Nerve";
const char string_answer45B[] PROGMEM = "Sciatic Nerve";
const char string_answer45C[] PROGMEM = "Trigeminal Nerve";
const char string_answer46A[] PROGMEM = "Andromeda";
const char string_answer46B[] PROGMEM = "Messier 81";
const char string_answer46C[] PROGMEM = "Centaurus A";
const char string_answer47A[] PROGMEM = "Isotopes";
const char string_answer47B[] PROGMEM = "Compounds";
const char string_answer47C[] PROGMEM = "Anions";
const char string_answer48A[] PROGMEM = "Jupiter";
const char string_answer48B[] PROGMEM = "Mars";
const char string_answer48C[] PROGMEM = "Venus";
const char string_answer49A[] PROGMEM = "Saturn";
const char string_answer49B[] PROGMEM = "Uranus";
const char string_answer49C[] PROGMEM = "Venus";
const char string_answer50A[] PROGMEM = "Bill Gates";
const char string_answer50B[] PROGMEM = "Warren Buffet";
const char string_answer50C[] PROGMEM = "Steve Jobs";
const char string_answer51A[] PROGMEM = "Farads";
const char string_answer51B[] PROGMEM = "Henrys";
const char string_answer51C[] PROGMEM = "Volts";
const char string_answer52A[] PROGMEM = "6";
const char string_answer52B[] PROGMEM = "2";
const char string_answer52C[] PROGMEM = "3";
const char string_answer53A[] PROGMEM = "Phillipines";
const char string_answer53B[] PROGMEM = "Galapagos Islands";
const char string_answer53C[] PROGMEM = "Tortuga Islands";
const char string_answer54A[] PROGMEM = "-40";
const char string_answer54B[] PROGMEM = "132";
const char string_answer54C[] PROGMEM = "10,867";
const char string_answer55A[] PROGMEM = "Don't pick me";
const char string_answer55B[] PROGMEM = "Pick me";
const char string_answer55C[] PROGMEM = "Don't pick me either";
const char string_answer56A[] PROGMEM = "Nitrate";
const char string_answer56B[] PROGMEM = "Nitrite";
const char string_answer56C[] PROGMEM = "Ammonium";
const char string_answer57A[] PROGMEM = "1/6 of Earth's gravity";
const char string_answer57B[] PROGMEM = "1/10 of Earth's gravity";
const char string_answer57C[] PROGMEM = "1/12 of Earth's gravity";
const char string_answer58A[] PROGMEM = "Mytosis";
const char string_answer58B[] PROGMEM = "Apoptosis";
const char string_answer58C[] PROGMEM = "Meiosis";
const char string_answer59A[] PROGMEM = "Radio";
const char string_answer59B[] PROGMEM = "Light";
const char string_answer59C[] PROGMEM = "Sound";
const char string_answer60A[] PROGMEM = "23 hours";
const char string_answer60B[] PROGMEM = "19 hours";
const char string_answer60C[] PROGMEM = "26 hours";
const char string_answer61A[] PROGMEM = "20";
const char string_answer61B[] PROGMEM = "12";
const char string_answer61C[] PROGMEM = "22";
const char string_answer62A[] PROGMEM = "Capacitor";
const char string_answer62B[] PROGMEM = "Resistor";
const char string_answer62C[] PROGMEM = "Switch";
const char string_answer63A[] PROGMEM = "2.54";
const char string_answer63B[] PROGMEM = "25.4";
const char string_answer63C[] PROGMEM = "0.254";
const char string_answer64A[] PROGMEM = "False";
const char string_answer64B[] PROGMEM = "Don't pick me";
const char string_answer64C[] PROGMEM = "True";
const char string_answer65A[] PROGMEM = "about 1,830 times more massive";
const char string_answer65B[] PROGMEM = "about 100,000 times more massive";
const char string_answer65C[] PROGMEM = "there is currently no way to measure this";
const char string_answer66A[] PROGMEM = "Larynx";
const char string_answer66B[] PROGMEM = "Epiglottis";
const char string_answer66C[] PROGMEM = "Philtrum";
const char string_answer67A[] PROGMEM = "Twisting or turning force";
const char string_answer67B[] PROGMEM = "Angular acceleration";
const char string_answer67C[] PROGMEM = "Angular velocity";
const char string_answer68A[] PROGMEM = "Fission";
const char string_answer68B[] PROGMEM = "Fusion";
const char string_answer68C[] PROGMEM = "Fashion";
const char string_answer69A[] PROGMEM = "Not nice";
const char string_answer69B[] PROGMEM = "Not nice";
const char string_answer69C[] PROGMEM = "Nice.";
const char string_answer70A[] PROGMEM = "Capacitive Current";
const char string_answer70B[] PROGMEM = "Direct Current";
const char string_answer70C[] PROGMEM = "Alternatic Current";
const char string_answer71A[] PROGMEM = "340 m/s";
const char string_answer71B[] PROGMEM = "700 m/s";
const char string_answer71C[] PROGMEM = "100 m/s";
const char string_answer72A[] PROGMEM = "Pulsars";
const char string_answer72B[] PROGMEM = "Light";
const char string_answer72C[] PROGMEM = "Neutrinos";
const char string_answer73A[] PROGMEM = "Don't pick me";
const char string_answer73B[] PROGMEM = "True";
const char string_answer73C[] PROGMEM = "False";
const char string_answer74A[] PROGMEM = "Buoyancy";
const char string_answer74B[] PROGMEM = "Leverage";
const char string_answer74C[] PROGMEM = "Magnetism";
const char string_answer75A[] PROGMEM = "212 F";
const char string_answer75B[] PROGMEM = "112 C";
const char string_answer75C[] PROGMEM = "112 F";
const char string_answer76A[] PROGMEM = "True";
const char string_answer76B[] PROGMEM = "False";
const char string_answer76C[] PROGMEM = "Don't pick me";
const char string_answer77A[] PROGMEM = "Electromagnetism";
const char string_answer77B[] PROGMEM = "Moon";
const char string_answer77C[] PROGMEM = "Gravity";
const char string_answer78A[] PROGMEM = "Nugget and Tender";
const char string_answer78B[] PROGMEM = "Fat Man and Little Boy";
const char string_answer78C[] PROGMEM = "Bang and Boom";
const char string_answer79A[] PROGMEM = "Selcouth";
const char string_answer79B[] PROGMEM = "Torque";
const char string_answer79C[] PROGMEM = "Fulcrum";
const char string_answer80A[] PROGMEM = "0.0001";
const char string_answer80B[] PROGMEM = "0.00001";
const char string_answer80C[] PROGMEM = "0.000001";
const char string_answer81A[] PROGMEM = "Freddie Mercury";
const char string_answer81B[] PROGMEM = "Steven Tyler";
const char string_answer81C[] PROGMEM = "Keith Richards";
const char string_answer82A[] PROGMEM = "Aricebo";
const char string_answer82B[] PROGMEM = "Discovery";
const char string_answer82C[] PROGMEM = "Voyager 1";
const char string_answer83A[] PROGMEM = "Farads";
const char string_answer83B[] PROGMEM = "Volts";
const char string_answer83C[] PROGMEM = "Coulombs";
const char string_answer84A[] PROGMEM = "Differential Equations";
const char string_answer84B[] PROGMEM = "Calculus";
const char string_answer84C[] PROGMEM = "Linear Algebra";
const char string_answer85A[] PROGMEM = "It's a homophone for the word googol";
const char string_answer85B[] PROGMEM = "It's the last name of its founder";
const char string_answer85C[] PROGMEM = "It's a nonsense word from a Lewis Carroll poem";
const char string_answer86A[] PROGMEM = "Current divided by inductance";
const char string_answer86B[] PROGMEM = "Current times inductance";
const char string_answer86C[] PROGMEM = "Current times resistance";
const char string_answer87A[] PROGMEM = "-1";
const char string_answer87B[] PROGMEM = "0";
const char string_answer87C[] PROGMEM = "1";
const char string_answer88A[] PROGMEM = "Pick me";
const char string_answer88B[] PROGMEM = "Don't pick me";
const char string_answer88C[] PROGMEM = "Don't pick me";
const char string_answer89A[] PROGMEM = "HMS Endeavour";
const char string_answer89B[] PROGMEM = "HMS Victory";
const char string_answer89C[] PROGMEM = "HMS Beagle";
const char string_answer90A[] PROGMEM = "Eagles";
const char string_answer90B[] PROGMEM = "Beatles";
const char string_answer90C[] PROGMEM = "ELO";
const char string_answer91A[] PROGMEM = "Don't pick me";
const char string_answer91B[] PROGMEM = "True";
const char string_answer91C[] PROGMEM = "False";
const char string_answer92A[] PROGMEM = "Spain and Morocco";
const char string_answer92B[] PROGMEM = "India and Sri Lanka";
const char string_answer92C[] PROGMEM = "England and France";
const char string_answer93A[] PROGMEM = "0 K";
const char string_answer93B[] PROGMEM = "500 K";
const char string_answer93C[] PROGMEM = "-200 K";
const char string_answer94A[] PROGMEM = "True";
const char string_answer94B[] PROGMEM = "False";
const char string_answer94C[] PROGMEM = "Don't pick me";
const char string_answer95A[] PROGMEM = "1600";
const char string_answer95B[] PROGMEM = "1609";
const char string_answer95C[] PROGMEM = "1618";
const char string_answer96A[] PROGMEM = "Edison";
const char string_answer96B[] PROGMEM = "Marconi";
const char string_answer96C[] PROGMEM = "Bell";
const char string_answer97A[] PROGMEM = "South America";
const char string_answer97B[] PROGMEM = "Africa";
const char string_answer97C[] PROGMEM = "Antarctica";
const char string_answer98A[] PROGMEM = "Leonardo DaVinci";
const char string_answer98B[] PROGMEM = "Salvador Dali";
const char string_answer98C[] PROGMEM = "Edvard Munch";
const char string_answer99A[] PROGMEM = "2.2";
const char string_answer99B[] PROGMEM = "1.4";
const char string_answer99C[] PROGMEM = "3.8";
const char string_answer100A[] PROGMEM = "Julius Caesar";
const char string_answer100B[] PROGMEM = "Alexander the Great";
const char string_answer100C[] PROGMEM = "Napoleon Bonaparte";
const char string_answer101A[] PROGMEM = "The weight of the fluid displaced by the object";
const char string_answer101B[] PROGMEM = "The gravitational force on the object";
const char string_answer101C[] PROGMEM = "The mass of the object";
const char string_answer102A[] PROGMEM = "Nucleus";
const char string_answer102B[] PROGMEM = "Ribosomes";
const char string_answer102C[] PROGMEM = "Endoplasmic Reticulum";
const char string_answer103A[] PROGMEM = "Utah River";
const char string_answer103B[] PROGMEM = "Arizona River";
const char string_answer103C[] PROGMEM = "Colorado River";
const char string_answer104A[] PROGMEM = "If gate";
const char string_answer104B[] PROGMEM = "Nand gate";
const char string_answer104C[] PROGMEM = "Xor gate";
const char string_answer105A[] PROGMEM = "Weight";
const char string_answer105B[] PROGMEM = "Mass";
const char string_answer105C[] PROGMEM = "Density";
const char string_answer106A[] PROGMEM = "Amperes";
const char string_answer106B[] PROGMEM = "Volts";
const char string_answer106C[] PROGMEM = "Coulombs";
const char string_answer107A[] PROGMEM = "Abbey Road";
const char string_answer107B[] PROGMEM = "Please Please Me";
const char string_answer107C[] PROGMEM = "I Want to Hold Your Hand";
const char string_answer108A[] PROGMEM = "Don't pick me";
const char string_answer108B[] PROGMEM = "Pick me";
const char string_answer108C[] PROGMEM = "Don't pick me";
const char string_answer109A[] PROGMEM = "Neptune";
const char string_answer109B[] PROGMEM = "Poseidon";
const char string_answer109C[] PROGMEM = "Mars";
const char string_answer110A[] PROGMEM = "12";
const char string_answer110B[] PROGMEM = "8";
const char string_answer110C[] PROGMEM = "6";
const char string_answer111A[] PROGMEM = "Feynman";
const char string_answer111B[] PROGMEM = "Oppenheimer";
const char string_answer111C[] PROGMEM = "Einstein";
const char string_answer112A[] PROGMEM = "Don't pick me";
const char string_answer112B[] PROGMEM = "Pick me";
const char string_answer112C[] PROGMEM = "Don't pick me";
const char string_answer113A[] PROGMEM = "Kelvin";
const char string_answer113B[] PROGMEM = "Joule";
const char string_answer113C[] PROGMEM = "Calorie";
const char string_answer114A[] PROGMEM = "Jupter";
const char string_answer114B[] PROGMEM = "Saturn";
const char string_answer114C[] PROGMEM = "Uranus";
const char string_answer115A[] PROGMEM = "Chile";
const char string_answer115B[] PROGMEM = "Peru";
const char string_answer115C[] PROGMEM = "Brazil";
const char string_answer116A[] PROGMEM = "Galileo";
const char string_answer116B[] PROGMEM = "Copernicus";
const char string_answer116C[] PROGMEM = "Kepler";
const char string_answer117A[] PROGMEM = "5 miles per second";
const char string_answer117B[] PROGMEM = "50 miles per minute";
const char string_answer117C[] PROGMEM = "5000 miles per hour";
const char string_answer118A[] PROGMEM = "13.8 billion years";
const char string_answer118B[] PROGMEM = "4.5 billioin years";
const char string_answer118C[] PROGMEM = "6,000 years";
const char string_answer119A[] PROGMEM = "DaVinci";
const char string_answer119B[] PROGMEM = "Michelangelo";
const char string_answer119C[] PROGMEM = "Raphael";
const char string_answer120A[] PROGMEM = "Polio";
const char string_answer120B[] PROGMEM = "Smallpox";
const char string_answer120C[] PROGMEM = "Leprosy";
const char string_answer121A[] PROGMEM = "Don't pick me";
const char string_answer121B[] PROGMEM = "True";
const char string_answer121C[] PROGMEM = "False";
const char string_answer122A[] PROGMEM = "Acceleration";
const char string_answer122B[] PROGMEM = "Position";
const char string_answer122C[] PROGMEM = "Speed";
const char string_answer123A[] PROGMEM = "Don't pick me";
const char string_answer123B[] PROGMEM = "Don't pick me either";
const char string_answer123C[] PROGMEM = "Pick me";


const char string_A[] PROGMEM = "A";
const char string_B[] PROGMEM = "B";
const char string_C[] PROGMEM = "C";


//here is where the previous questions and answers I just declared get put into an array which is also in flash memory
const char* const question[124] PROGMEM = {string_question0, string_question1, string_question2, string_question3, string_question4, string_question5, string_question6, string_question7, 
                                           string_question8, string_question9, string_question10, string_question11, string_question12, string_question13, string_question14, string_question15, 
                                           string_question16, string_question17, string_question18, string_question19, string_question20, string_question21, string_question22, string_question23, 
                                           string_question24, string_question25, string_question26, string_question27, string_question28, string_question29, string_question30, string_question31, 
                                           string_question32, string_question33, string_question34, string_question35, string_question36, string_question37, string_question38, string_question39, 
                                           string_question40, string_question41, string_question42, string_question43, string_question44, string_question45, string_question46, string_question47, 
                                           string_question48, string_question49, string_question50, string_question51, string_question52, string_question53, string_question54, string_question55, 
                                           string_question56, string_question57, string_question58, string_question59, string_question60, string_question61, string_question62, string_question63, 
                                           string_question64, string_question65, string_question66, string_question67, string_question68, string_question69, string_question70, string_question71, 
                                           string_question72, string_question73, string_question74, string_question75, string_question76, string_question77, string_question78, string_question79, 
                                           string_question80, string_question81, string_question82, string_question83, string_question84, string_question85, string_question86, string_question87, 
                                           string_question88, string_question89, string_question90, string_question91, string_question92, string_question93, string_question94, string_question95, 
                                           string_question96, string_question97, string_question98, string_question99, string_question100, string_question101, string_question102, string_question103, 
                                           string_question104, string_question105, string_question106, string_question107, string_question108, string_question109, string_question110, string_question111, 
                                           string_question112, string_question113, string_question114, string_question115, string_question116, string_question117, string_question118, string_question119, 
                                           string_question120, string_question121, string_question122, string_question123};

const char* const possibleAnswers[372] PROGMEM = {string_answer0A, string_answer0B, string_answer0C, string_answer1A, string_answer1B, string_answer1C, 
                                                  string_answer2A, string_answer2B, string_answer2C, string_answer3A, string_answer3B, string_answer3C, 
                                                  string_answer4A, string_answer4B, string_answer4C, string_answer5A, string_answer5B, string_answer5C, 
                                                  string_answer6A, string_answer6B, string_answer6C, string_answer7A, string_answer7B, string_answer7C, 
                                                  string_answer8A, string_answer8B, string_answer8C, string_answer9A, string_answer9B, string_answer9C, 
                                                  string_answer10A, string_answer10B, string_answer10C, string_answer11A, string_answer11B, string_answer11C, 
                                                  string_answer12A, string_answer12B, string_answer12C, string_answer13A, string_answer13B, string_answer13C, 
                                                  string_answer14A, string_answer14B, string_answer14C, string_answer15A, string_answer15B, string_answer15C, 
                                                  string_answer16A, string_answer16B, string_answer16C,string_answer17A, string_answer17B, string_answer17C, 
                                                  string_answer18A, string_answer18B, string_answer18C, string_answer19A, string_answer19B, string_answer19C, 
                                                  string_answer20A, string_answer20B, string_answer20C, string_answer21A, string_answer21B, string_answer21C, 
                                                  string_answer22A, string_answer22B, string_answer22C, string_answer23A, string_answer23B, string_answer23C, 
                                                  string_answer24A, string_answer24B, string_answer24C, string_answer25A, string_answer25B, string_answer25C, 
                                                  string_answer26A, string_answer26B, string_answer26C, string_answer27A, string_answer27B, string_answer27C, 
                                                  string_answer28A, string_answer28B, string_answer28C, string_answer29A, string_answer29B, string_answer29C, 
                                                  string_answer30A, string_answer30B, string_answer30C, string_answer31A, string_answer31B, string_answer31C, 
                                                  string_answer32A, string_answer32B, string_answer32C, string_answer33A, string_answer33B, string_answer33C, 
                                                  string_answer34A, string_answer34B, string_answer34C, string_answer35A, string_answer35B, string_answer35C, 
                                                  string_answer36A, string_answer36B, string_answer36C, string_answer37A, string_answer37B, string_answer37C, 
                                                  string_answer38A, string_answer38B, string_answer38C, string_answer39A, string_answer39B, string_answer39C, 
                                                  string_answer40A, string_answer40B, string_answer40C, string_answer41A, string_answer41B, string_answer41C, 
                                                  string_answer42A, string_answer42B, string_answer42C, string_answer43A, string_answer43B, string_answer43C, 
                                                  string_answer44A, string_answer44B, string_answer44C, string_answer45A, string_answer45B, string_answer45C, 
                                                  string_answer46A, string_answer46B, string_answer46C, string_answer47A, string_answer47B, string_answer47C, 
                                                  string_answer48A, string_answer48B, string_answer48C, string_answer49A, string_answer49B, string_answer49C, 
                                                  string_answer50A, string_answer50B, string_answer50C, string_answer51A, string_answer51B, string_answer51C, 
                                                  string_answer52A, string_answer52B, string_answer52C, string_answer53A, string_answer53B, string_answer53C, 
                                                  string_answer54A, string_answer54B, string_answer54C, string_answer55A, string_answer55B, string_answer55C, 
                                                  string_answer56A, string_answer56B, string_answer56C, string_answer57A, string_answer57B, string_answer57C, 
                                                  string_answer58A, string_answer58B, string_answer58C, string_answer59A, string_answer59B, string_answer59C, 
                                                  string_answer60A, string_answer60B, string_answer60C, string_answer61A, string_answer61B, string_answer61C, 
                                                  string_answer62A, string_answer62B, string_answer62C, string_answer63A, string_answer63B, string_answer63C, 
                                                  string_answer64A, string_answer64B, string_answer64C, string_answer65A, string_answer65B, string_answer65C, 
                                                  string_answer66A, string_answer66B, string_answer66C, string_answer67A, string_answer67B, string_answer67C, 
                                                  string_answer68A, string_answer68B, string_answer68C, string_answer69A, string_answer69B, string_answer69C, 
                                                  string_answer70A, string_answer70B, string_answer70C, string_answer71A, string_answer71B, string_answer71C, 
                                                  string_answer72A, string_answer72B, string_answer72C, string_answer73A, string_answer73B, string_answer73C, 
                                                  string_answer74A, string_answer74B, string_answer74C, string_answer75A, string_answer75B, string_answer75C, 
                                                  string_answer76A, string_answer76B, string_answer76C, string_answer77A, string_answer77B, string_answer77C, 
                                                  string_answer78A, string_answer78B, string_answer78C, string_answer79A, string_answer79B, string_answer79C, 
                                                  string_answer80A, string_answer80B, string_answer80C, string_answer81A, string_answer81B, string_answer81C, 
                                                  string_answer82A, string_answer82B, string_answer82C, string_answer83A, string_answer83B, string_answer83C, 
                                                  string_answer84A, string_answer84B, string_answer84C, string_answer85A, string_answer85B, string_answer85C, 
                                                  string_answer86A, string_answer86B, string_answer86C, string_answer87A, string_answer87B, string_answer87C, 
                                                  string_answer88A, string_answer88B, string_answer88C, string_answer89A, string_answer89B, string_answer89C, 
                                                  string_answer90A, string_answer90B, string_answer90C, string_answer91A, string_answer91B, string_answer91C, 
                                                  string_answer92A, string_answer92B, string_answer92C, string_answer93A, string_answer93B, string_answer93C, 
                                                  string_answer94A, string_answer94B, string_answer94C, string_answer95A, string_answer95B, string_answer95C, 
                                                  string_answer96A, string_answer96B, string_answer96C, string_answer97A, string_answer97B, string_answer97C, 
                                                  string_answer98A, string_answer98B, string_answer98C, string_answer99A, string_answer99B, string_answer99C, 
                                                  string_answer100A, string_answer100B, string_answer100C, string_answer101A, string_answer101B, string_answer101C, 
                                                  string_answer102A, string_answer102B, string_answer102C, string_answer103A, string_answer103B, string_answer103C, 
                                                  string_answer104A, string_answer104B, string_answer104C, string_answer105A, string_answer105B, string_answer105C, 
                                                  string_answer106A, string_answer106B, string_answer106C, string_answer107A, string_answer107B, string_answer107C, 
                                                  string_answer108A, string_answer108B, string_answer108C, string_answer109A, string_answer109B, string_answer109C, 
                                                  string_answer110A, string_answer110B, string_answer110C, string_answer111A, string_answer111B, string_answer111C, 
                                                  string_answer112A, string_answer112B, string_answer112C, string_answer113A, string_answer113B, string_answer113C, 
                                                  string_answer114A, string_answer114B, string_answer114C, string_answer115A, string_answer115B, string_answer115C, 
                                                  string_answer116A, string_answer116B, string_answer116C, string_answer117A, string_answer117B, string_answer117C, 
                                                  string_answer118A, string_answer118B, string_answer118C, string_answer119A, string_answer119B, string_answer119C, 
                                                  string_answer120A, string_answer120B, string_answer120C, string_answer121A, string_answer121B, string_answer121C, 
                                                  string_answer122A, string_answer122B, string_answer122C, string_answer123A, string_answer123B, string_answer123C};

const char* const correctAnswers[124] PROGMEM = {string_A, string_B, string_A, string_B, string_C, string_B, string_B, string_C, 
                                                 string_C, string_B, string_A, string_A, string_B, string_B, string_C, string_A, 
                                                 string_B, string_A, string_C, string_A, string_C, string_B, string_B, string_A, 
                                                 string_C, string_A, string_A, string_C, string_A, string_A, string_B, string_A,
                                                 string_C, string_C, string_B, string_A, string_B, string_C, string_B, string_A, 
                                                 string_B, string_B, string_C, string_C, string_A, string_B, string_A, string_A, 
                                                 string_B, string_B, string_A, string_B, string_B, string_B, string_A, string_B, 
                                                 string_B, string_A, string_B, string_C, string_A, string_B, string_C, string_A,
                                                 string_C, string_A, string_B, string_A, string_A, string_C, string_C, string_A, 
                                                 string_B, string_B, string_A, string_A, string_A, string_C, string_B, string_C, 
                                                 string_C, string_A, string_C, string_A, string_B, string_A, string_C, string_C, 
                                                 string_A, string_C, string_A, string_B, string_A, string_A, string_A, string_B,
                                                 string_C, string_B, string_C, string_A, string_A, string_A, string_A, string_C, 
                                                 string_A, string_B, string_A, string_B, string_B, string_B, string_A, string_B, 
                                                 string_B, string_C, string_B, string_B, string_A, string_A, string_A, string_A, 
                                                 string_B, string_B, string_A, string_C};

//these variables are part of the process of accessing the info in the flash memory arrays
//make sure their lengths are enough to hold what they need to
char questionBuffer[200];
char possibleAnswersBuffer[100];
char possibleAnswersBuffer1[100];
char possibleAnswersBuffer2[100];
char correctAnswersBuffer[100];

//this line is the basic setup for accessing the stuff in the arrays
//basically it takes the array and index and assigns it to the buffer variables
//i don't understand how it works but thats okay just copy and paste and fill in as needed
//strcpy_P(questionBuffer, (char *)pgm_read_word(&(question[t.min])));

int lastDay = -1;
int buttonA = 9;
int buttonB = 8;
int buttonC = 7; // this has been changed from pics to fit nano
int mins;
Time t;
//const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
const int rs = 12, en = 10, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
DS3231  rtc(SDA, SCL);

void setup() {
  pinMode(buttonA, INPUT_PULLUP);
  pinMode(buttonB, INPUT_PULLUP);
  pinMode(buttonC, INPUT_PULLUP); // when digitalRead(buttonC) == 0 then it is being pressed
  lcd.begin(16, 2);
  Serial.begin(9600);
  rtc.begin();
   //The following lines can be uncommented to set the date and time
  //rtc.setDOW(TUESDAY);     // Set Day-of-Week to SUNDAY
  //rtc.setTime(14, 43, 00);     // Set the time (hours, minutes, seconds) (24 hour format)
  //rtc.setDate(29, 12, 2020);   // Set the date (DD, MM, YYYY)
}

  /* // Send Day-of-Week
  Serial.print(rtc.getDOWStr());
  Serial.print(" ");
  // Send date
  Serial.print(rtc.getDateStr());
  Serial.print(" -- ");
  // Send time
  Serial.println(rtc.getTimeStr());*/
  


void loop() {
  //I just learned about this Time variable t and it has been very helpful in this project :)
  t = rtc.getTime();
  Serial.println(t.min);
  Serial.println(t.sec);
  Serial.println(t.date);
  Serial.println(t.mon);

  //this uses the findIndex() function below to determine if the date is between January 4th and May 7th bc that's when the game should be played. If not, it waits till Jan 4.
  //it is important to update t inside the loop or it will never exit.
  while(findIndex(t.mon, t.date) < 0 || findIndex(t.mon, t.date) > 123){
    scrollDisplay("The game will begin on January 4th");
    t = rtc.getTime();
    Serial.println(t.min);
    Serial.println(t.sec);
    Serial.println(t.date);
    Serial.println(t.mon);
  }

  //this if statement basically uses a variable called lastDay to make sure that it's a new day so you only get one question per day
  if(findIndex(t.mon, t.date) != lastDay){
    //these next lines display the appropriate question for any given day as well as the appropriate answer choices
    strcpy_P(questionBuffer, (char *)pgm_read_word(&(question[findIndex(t.mon, t.date)])));
    Serial.println(questionBuffer);
    lcd.clear();
    scrollDisplay(questionBuffer);
    lcd.clear();
    strcpy_P(possibleAnswersBuffer, (char *)pgm_read_word(&(possibleAnswers[findIndex(t.mon, t.date) * 3])));
    strcpy_P(possibleAnswersBuffer1, (char *)pgm_read_word(&(possibleAnswers[findIndex(t.mon, t.date) * 3 + 1])));
    strcpy_P(possibleAnswersBuffer2, (char *)pgm_read_word(&(possibleAnswers[findIndex(t.mon, t.date) * 3 + 2])));
    String answerChoices = "A: " + String(possibleAnswersBuffer) + "   B: " + possibleAnswersBuffer1 + "   C: " + possibleAnswersBuffer2;
    scrollDisplay(answerChoices);
    //makes sure a switch has been flipped meaning an answer is being submitted
    if(buttonPress() != "Z"){
      //next line updates last day so as to not continue asking questions until the upcoming day
      lastDay = findIndex(t.mon, t.date);
      strcpy_P(correctAnswersBuffer, (char *)pgm_read_word(&(correctAnswers[findIndex(t.mon, t.date)])));
      if(buttonPress() == correctAnswersBuffer){ // if the answer is correct
        lcd.clear();
        lcd.setCursor(0,1);
        lcd.print("Correct! :)");
        delay(5000);
      }
      else{ //if the answer is wrong
        lcd.clear();
        lcd.setCursor(0,1);
        lcd.print("Incorrect"); // this states the answer was incorrect and displays the correct answer
        delay(5000);
        if(String(correctAnswersBuffer) == "A"){
          lcd.clear();
          scrollDisplay("The correct answer was A: " + String(possibleAnswersBuffer));
        }
        else if(String(correctAnswersBuffer) == "B"){
          lcd.clear();
          scrollDisplay("The correct answer was B: " + String(possibleAnswersBuffer1));
        }
        else if(String(correctAnswersBuffer) == "C"){
          lcd.clear();
          scrollDisplay("The correct answer was C: " + String(possibleAnswersBuffer2));
        }
      }
    }
  }
  else{ //if it is not a new day then it displays this message until the next day
    lcd.clear();
    scrollDisplay("Thanks for playing! New question tomorrow :)");
  }
  
}

String buttonPress(){ // this returns what answer was selected and if nothing was selected it returns "Z"
  if(digitalRead(buttonA) == 0){
    return "A";
  }
  else if(digitalRead(buttonB) == 0){
    return "B";
  }
  else if(digitalRead(buttonC) == 0){
    return "C";
  }
  else{
    return "Z";
  }
}

void scrollDisplay(String message){ // this is a function to display long scrolling messages on the top line of the LCD
  lcd.clear();
  if(message.length() <= 16){
    lcd.print(String(message));
    delay(3000);
  }
  else{
    lcd.print(message.substring(0, 16));
    delay(1500);
    for(int i = 0; i < (message.length() - 15); i++){
      lcd.clear();
      delay(100);
      lcd.print(message.substring(i, i+16));
      delay(150);
      if(i == (message.length() - 16)){
        delay(1350);
      }
    }
  }
}

int findIndex(int Month, int Date){ // this function maps days to the correct indeces of the array. in the program we make sure this value is between [0, 123] because those are the right dates
  if(Month == 1){
    return (Date - 4);
  }
  else if(Month == 2){
    return (Date + 27);
  }
  else if(Month == 3){
    return (Date + 55);
  }
  else if(Month == 4){
    return (Date + 86);
  }
  else if(Month == 5){
    return (Date + 116);
  }
  else{
    return 200;
  }
}
