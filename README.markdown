+-----------------------------------------------------------------------+
| +------------------------------------------------------------------+  |
| | Travail de Maturité                                              |  |
| |                                                                  |  |
| | ***Physique • Acoustique•Musique***                              |  |
| |                                                                  |  |
| | > *Timotey Kreslo,* *Maître responsable :*                       |  |
| | >                                                                |  |
| | > *3ème année, Collège de Candolle* *Jan Grote*                  |  |
| +==================================================================+  |
| +------------------------------------------------------------------+  |
+=======================================================================+
+-----------------------------------------------------------------------+

![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image1.png){width="8.266666666666667in"
height="8.266666666666667in"}

**[Physique -- Acoustique -- Musi]{.underline}q[ue]{.underline}**

> *[Table des matières :]{.underline}*
>
> • Introduction
> ................................................................ 3
>
> • Chapitre 1 -- Le son
> ....................................................... 4
>
> Onde mécanique transversale
> ....................................................... 4 Onde
> longitudinale
> ................................................................... 5
> Interférence
> ............................................................................
> 5 Diffraction
> .............................................................................
> 6 Fente de Young
> .....................................................................\...
> 7
>
> • Chapitre 2 -- La musique
> ................................................. 7
>
> Champs auditifs
> .....................................................................
> 7-8
>
> Moyens de production de la musique
> ............................................. 8 Fonctionnement d'un
> haut-parleur ................................................ 9
> Fonctionnement du déchargeur
> .................................................... 9
>
> • Chapitre 3 -- Description de l'appareil
> ................................. 10
>
> (Déchargeur plasmique)
> ............................................................. 10
>
> Schémas électrique
> ................................................................... 11
> Processus de l'orage
> ...............................................................\... 12
>
> • Chapitre 3.1 -- Description du programme
> ............................. 13
>
> (Arduino)
> ..............................................................................
> 13
>
> • Journal de Bord
> .........................................................\... 14
>
> • Conclusion
> ................................................................. 17
> Remerciements
> .....................................................................\...
> 18
>
> Sources
> ..............................................................................\...
> 19
>
> • Annexe 1
> ................................................................... 20
> Code ARDUINO permettant de jouer « do, ré, mi »
> ............................ 20
>
> • Annexe 2
> ................................................................... 23
> Code ARDUINO jouant la chanson « Secrets » de One Republic
> ............ 23

2

> **Introduction**
>
> Dans ce travail de maturité, je vais tout d'abord expliquer ce qu'est
> l'acoustique.
>
> L'acoustique est un domaine de connaissances qui étudie les propriétés
> du son. Lorsqu'on entend parler d'"acoustique", on pense à un
> phénomène ayant un lien avec la musique, comme par exemple -- le jeu
> de la guitare. Cependant,\
> l'acoustique est considérée comme une science de la nature du son et
> des problèmes liés à son occurrence, sa propagation, sa perception et
> ses effets. C'est un domaine, s'intéressant aux vibrations et aux
> ondes allant des plus petites fréquences jusqu'à de très hautes,
> généralement étudié en physique, bien que son utilité puisse prendre
> une forme artistique. C'est ce qu'il s'agira de faire, dans ce travail
> de maturité.
>
> Ensuite nous allons nous intéresser à la nature du son.
>
> Le son est l'un des canaux les plus importants de réception et de
> transmission de l'information. Par exemple, la musique est l'un des
> moyens de transmission de l'information esthétique. Moi, je vais donc
> raconter qu'est-ce qu'est le son et comment il peut être produit, en
> se référant à plusieurs exemples et faisant un rappel sur certains
> principes physiques.
>
> Puis nous regarderons en détail : quels sont les différents moyens
> d'utiliser le son dans le domaine musical, et nous en proposerons même
> un nouveau.
>
> Finalement, il s'agira de présenter et d'expliquer le fonctionnement
> du nouvel appareil construit, capable d'émettre une mélodie tout en
> allumant une allumette.
>
> Cette rédaction devrait également permettre à un étudiant de
> comprendre comment assembler un objet analogue à celui-ci.

3

**Chapitre 1 - Le son**

Le son c'est une onde, en d'autres termes : une perturbation périodique
se propageant dans l'espace. Elle peut aussi être considérée comme un
phénomène de propagation de l'énergie par le biais des molécules mis en
mouvement dans un ordre spécifique.

Chaque onde possède certaines propriétés :

> • L'amplitude -- c'est la hauteur de la crête commençant à l'axe des
> abscisses,
>
> mesurée en mètres. Elle est habituellement notée avec un A majuscule.
>
> • La fréquence d'oscillation -- la pulsation de l'onde, représentée
> par la lettre grecque υ, prononcée «nu» et est mesurée en secondes-1,
> dit : "Hertz". Elle est aussi égale à l'inverse de la période T, qui
> elle est mesurée en secondes.
>
> • La longueur d'onde -- c'est la distance entre deux points où les
> oscillations se produisent dans la même phase, par exemple: entre deux
> crêtes successives. Elle est notée avec la lettre grecque λ, dite
> «lambda» et est mesurée en mètres.
>
> • La vitesse de propagation, allant parallèlement à la direction de la
> propagation,
>
> et perpendiculairement à l'amplitude. Celle-ci est calculée à partir
> de la division de la longueur d'onde λ par la période T, ayant comme
> unité : des \[m/s\]

Sur le schéma ci-dessous nous pouvons observer un modèle d'une onde
mécanique, se propageant parallèlement à l'axe horizontal.

![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image2.png){width="6.277777777777778in"
height="3.6749989063867017in"}

source de l'image : *perceptionsonoretpe.free.fr/I-1.html*

4

> Nous appellerons ce type d'onde décrivant une fonction sinusoïdale :
> "onde harmonique".
>
> Il existe deux types de diffusions ondulatoires : le type transversale
> et longitudinale. Sur l'image précédente nous voyions une onde
> transversale, car celle-ci décrit une perturbation perpendiculaire à
> la direction de propagation. Alors que l'onde dite longitudinale
> représente une perturbation parallèle à la direction de propagation.
>
> Voici un exemple d'onde longitudinale :

**propagation**

![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image3.png){width="4.666666666666667in"
height="1.198611111111111in"}

source de l'image :
*www.sparknotes.com/testprep/books/sat2/physics/chapter17section3.rhtml*

> De plus, il est possible d'observer plusieurs effets lorsqu'on parle
> d'ondes, comme par exemple : Les interférences, les diffractions, les
> battements...
>
> [Interférence]{.underline}\
> Nous allons d'abord voir ce qu'est une interférence.
>
> Dans son cours de physique sur les "Ondes", de la troisième année du
> Collège de Candolle, M. Ischi appel ce phénomène "Le principe de
> superposition".

![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image4.png){width="4.319444444444445in"
height="2.2305555555555556in"}

> En effet, lorsque deux ondes se superposent et forment ce qu'on
> appelle "un ventre", comme sur le premier\
> schéma, ça s'appelle une\
> interférence constructive.
>
> Tandis que, sur le schéma d'en dessous, on aperçoit deux ondes qui
> s'annulent l'une l'autre, autrement dit "un nœud", et on appel ceci

source de l'image : *web.ncf.ca/ch865/frenchdescr/Superposition.html*
une interférence destructive.

5

> Il est intéressant de considérer le problème qui intervient souvent
> dans des salles de concert : Le son provenant de la scène, que perçoit
> le spectateur, peut varier en fonction de la place où il est assis ; à
> cause des ondes qui peuvent se réfléchir sur les murs de la salle et
> interférer avec les ondes se propageant en ligne droite. Il se
> pourrait qu'à un endroit précis l'observateur ne perçoive aucune
> sonorité, parce qu'en ce point-là l'onde émise directement et l'onde
> réfléchie s'annuleraient et formeraient comme on le dit : un
> "silence." Pour cette raison, une bonne salle de concert\
> comporte des murs pouvant "absorber" les ondes sonores, de sorte qu'il
> n'y ait aucune interaction avec les ondes directes.
>
> (Ce problème est tiré de la série d'exercices sur les ondes,
> distribuée en leçon de physique, le 14.5.2018, par M. Ischi)
>
> C'est pour éviter ce type de problème que la bande sonore, utilisée
> dans le clip musical accompagnant ce travail, a été enregistrée dans
> une chambre insonorisée.
>
> [Diffraction]{.underline}\
> Par la suite, nous allons évoquer la notion de diffraction.
>
> Au XVIIème siècle, un mathématicien (et physicien) néerlandais --
> Christian Huygens étudie le phénomène sonore qui se produit lorsqu'un
> observateur parvient à recevoir les ondes, bien qu'un obstacle soit
> positionné entre le récepteur et l'émetteur. La source n'est donc pas
> visible, cependant il est possible d'entendre les bruits qu'elle émet.
> Augustin Fresnel, un ingénieur et physicien français qui étudiait
> l'optique avait également élaboré ce phénomène au XIXème siècle. Dès
> lors, on appel ce principe : Le principe de Huygens-Fresnel. Le modèle
> d'Huygens, représenté ci-dessous, illustre bien ce phénomène de
> diffraction.
>
> ![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image5.png){width="4.373610017497813in"
> height="2.798611111111111in"}

auteur de l'illustration : *https://fr.wikipedia.org*

6

> Une fois que l'onde émise se confronte à un mur avec une fente, elle
> se fractionne en plusieurs points qui se comportent à leur tour comme
> des "sources sonores", c'est à dire que les ondes émises par ces
> points seront circulaires et interféreront ensemble en créant un
> nouveau "mur sonore". Puisque les ondes seront circulaires, nous
> pouvons apercevoir sur l'image précédente qu'elles se propagent
> derrière le mur également, ce qui fait que l'observateur, se trouvant
> à cet endroit, percevra les ondes aussi.
>
> [Fente de Young]{.underline}
>
> De surcroît on remarque que, plus la taille de la fente devient
> semblable à la longueur d'onde, mieux le\
> phénomène de diffraction devient observable. Cette fente est appelée :
> *la fente de Young*
>
> En effet, lorsque les longueurs de l'onde et de la fente sont environ
> égales, le point se trouvant dans la fente est considéré comme
> l'unique source d'onde et se comporte comme un nouvel émetteur. Nous
> pouvons observer cela sur le schéma ci-contre :

![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image6.png){width="2.8305555555555557in"
height="2.184721128608924in"}

> e sur :
>
> **Chapitre 2 -- La musique**
>
> L'art joue un grand rôle dans la vie d'un individu. La musique, étant
> un art, en est une partie importante. Certains artistes y trouvent un
> moyen pour s'exprimer, comme par exemple -- Beethoven. D'autres en
> font, de la musique, leur source d'inspiration, car il existe des
> mélodies structurées d'une façon extraordinaire, qui sont capables
> d'influencer si bien notre manière de penser, que les peuples ont
> décidé de considérer cet objet d'étude comme un art. Du point de vue
> scientifique, ce n'est qu'une accumulation de plusieurs ondes sonores
> émises avec des fréquences précises.
>
> [Champs auditifs]{.underline}\
> L'oreille est on organe ingénieusement constitué de sorte à être
> capable de percevoir ces fréquences, à l'aide de nos tympans.
>
> Cependant pas n'importe quelle fréquence est audible à l'oreille
> humaine. Il est commode de considérer que l'être humain peut entendre
> les notes de fréquences allants de 20 à 20'000 Hz. En dessous de 20
> Hz, le son n'est tout simplement pas considéré comme une note
> musicale, mais le bruit est tout aussi bien perceptible.
>
> Le son se trouvant au-dessus du diapason audible est appelé
> "ultrason", alors que celui qui se trouve au-dessous est appelé
> "infrason".

7

> De plus, ce diapason de fréquences "audibles" se rétrécit au fur et à
> mesure de notre vieillissement. C'est à dire, que des personnes âgées
> ne seront pas capable d'entendre une sonorité vibrant à 20'000 Hz, car
> l'organe d'ouïe perd son astuciosité avec l'âge.
>
> Certains animaux sont capables de percevoir des ultrason et infrasons,
> d'autres les utilisent même pour s'orienter dans l'espace, comme par
> exemple : les chauves-souris ou les dauphins.

![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image7.png){width="6.6930555555555555in"
height="2.2819444444444446in"}

Image trouvée sur: http://www.cochlea.org/entendre/champ-auditif-humain

> Moyens de production de la musi que\
> Nous allons, à présent, nous intéresser aux différentes façons de
> produire de la musique. Les sons, ou plus précisément les ondes
> sonores, peuvent être produits à partir des instruments musicaux ou
> des haut-parleurs, ou bien encore des appareils électroniques ou
> mécaniques, par exemple un moteur. Mais ces-derniers présentent des
> effets parasites. Dans la théorie du son on utilise la notion de
> "bruit". Un bruit c'est un son quelconque qui se produit à partir d'un
> ensemble de sources non coordonnées entre eux. Tout le monde peut
> facilement s'imaginer le bruit des feuilles sur les arbres s'agitant
> sous le vent. Dans la terminologie musicale du son, il existe des
> notions importantes, comme ; l'octave, le ton ou le demi-ton. L'octave
> désigne un intervalle dans lequel le rapport des fréquences entre les
> sonorités et de un pour deux.
>
> L'octave est généralement très audible, tandis que les sons à
> l'intérieur de cet intervalle peuvent paraître très semblables. On
> peut aussi dire qu'une octave c'est un son produisant deux fois plus
> d'oscillations qu'un autre son. Par exemple : la fréquence de 800 Hz
> est tout simplement une octave plus haute que 400 Hz, alors que la
> fréquence de 400 Hz est à son tour l'octave suivante du son à 200 Hz.
> L'octave est constituée de douze demi-tons, comprenant huit notes
> formant ce qu'on appelle une gamme. Les oscillations variables dans
> une onde sonore harmonique d'une fréquence donnée est perçu par
> l'oreille humaine en tant qu'un ton musical.
>
> Voici quelques cas particuliers, ou méthodes pour créer de la musique.
>
> Les instruments musicaux :\
> • Le tambour -- membranaire
>
> • La guitare -- cordal
>
> • Le tube -- à vent

8

![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image9.png){width="6.997222222222222in"
height="4.394089020122484in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image10.png){width="3.4027777777777777in"
height="1.4305555555555556in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image11.png){width="3.625in"
height="1.5972222222222223in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image12.png){width="8.03888779527559in"
height="2.3032764654418196in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image13.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image14.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image15.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image16.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image17.png){width="6.944444444444445e-2in"
height="8.333333333333333e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image18.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image19.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image20.png){width="5.555555555555555e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image21.png){width="8.333333333333333e-2in"
height="5.555555555555555e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image22.png){width="6.944444444444445e-2in"
height="8.333333333333333e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image23.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image24.png){width="5.555555555555555e-2in"
height="5.555555555555555e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image25.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image26.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image27.png){width="9.722222222222222e-2in"
height="9.722222222222222e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image28.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image29.png){width="6.944444444444445e-2in"
height="6.944444444444445e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image30.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image31.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image32.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image33.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image34.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image35.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image36.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image37.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image38.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image39.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image40.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image41.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image42.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image43.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image44.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image45.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image46.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image47.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image48.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image49.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image50.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image51.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image52.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image53.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image54.png){width="4.1666666666666664e-2in"
height="5.555555555555555e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image55.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image56.png){width="4.1666666666666664e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image57.png){width="0.2916666666666667in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image58.png){width="2.7777777777777776e-2in"
height="2.7777777777777776e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image59.png){width="8.333333333333333e-2in"
height="6.944444444444445e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image60.png){width="2.7777777777777776e-2in"
height="2.7777777777777776e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image61.png){width="8.333333333333333e-2in"
height="8.333333333333333e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image62.png){width="8.333333333333333e-2in"
height="6.944444444444445e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image63.png){width="6.944444444444445e-2in"
height="6.944444444444445e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image64.png){width="2.7777777777777776e-2in"
height="4.1666666666666664e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image65.png){width="6.944444444444445e-2in"
height="8.333333333333333e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image66.png){width="6.944444444444445e-2in"
height="8.333333333333333e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image67.png){width="4.1666666666666664e-2in"
height="5.555555555555555e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image63.png){width="6.944444444444445e-2in"
height="6.944444444444445e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image68.png){width="6.944444444444445e-2in"
height="8.333333333333333e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image69.png){width="8.333333333333333e-2in"
height="8.333333333333333e-2in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image70.png){width="6.944444444444445e-2in"
height="6.944444444444445e-2in"}

> [Fonctionnement d'un haut-parleur]{.underline}
>
> Prenons un exemple avec un haut-parleur : **pression** Une membrane
> est placée dans un tube

+-----------------------------------+-----------------------------------+
| > rempli d'air. Si la membrane    | ![](vertopal_b2f3a25d79b64c41     |
| > effectue                        | 87202483f12d8a30/media/image8.png |
|                                   | ){width="4.1666666666666664e-2in" |
|                                   | height="4.1666666666666664e-2in"} |
+===================================+===================================+
+-----------------------------------+-----------------------------------+

> un mouvement brusque vers l'avant,\
> l'air se trouvant juxtaposé à celle-ci\
> se comprimera pendant un instant et\
> la pression augmentera en ce lieu.
>
> Les deux images ont été réalisées grâce au logiciel *GIMP*
>
> Après quoi, la membrane\
> \"reculera\" et le gaz se dilatera en\
> "poussant" la zone d'air\
> comprimé le long du tube. C'est\
> cette perturbation ondulatoire\
> qui sera par la suite considérée\
> comme un son, lorsqu'elle\
> atteindra l'organe auditif et\
> "excitera" le tympan.
>
> Lors de la formation d'une onde sonore, dans un gaz, il se produit un
> saut de pression, un gain de densité et un déplacement de particules à
> une vitesse constante.
>
> Or, il est important de comprendre que la matière ne se déplace pas
> avec l'onde sonore, mais c'est seulement une perturbation des masses
> aériennes temporelle qui se produit.
>
> [Fonctionnement du déchargeur]{.underline}\
> On sait que l'étincelle électrique produit aussi un saut de pression
> dans l'air : une micro explosion. Ce processus est analogue à celui du
> haut-parleur.
>
> Ainsi il est possible de l'utiliser pour produire de la musique.
>
> Au moment de l'émission de l'étincelle : la température, en cette
> zone, grandi instantanément, les molécules s'agitent rapidement et la
> pression augmente jusqu'à ce que l'étincelle s'éteigne. Ceci provoque
> la formation d'un front d'onde cylindrique, qui sur de grandes
> distances devient sphérique, en raison de la diffraction.

9

![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image71.png){width="6.6402777777777775in"
height="3.735156386701662in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image72.png){width="6.055555555555555in"
height="3.9722222222222223in"}

Il existe aussi des méthodes exotiques pour produire de la musique,
comme par exemple : Le Thérémine (instrument de musique électronique),
ou encore le déchargeur plasmique.

C'est en comprenant la nature du son qu'il est possible d'inventer de
nouvelles méthodes de production de la musique, notamment l'étincelle
électrique.

**Chapitre 3 - Description de l'appareil**

Premièrement nous examinerons les éléments qui constituent notre
appareil, puis nous proposerons un schémas électrique en expliquant la
fonction des composants principaux.

Corpus\
Électrodes

Transformateur

Amplificateur

Bloc ARDUINO

Interrupteur

Convertisseur de tension

Batterie

Port USB

L'image a été produite dans l'éditeur 3D *Blender.*

10

![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image73.png){width="1.2083333333333333in"
height="0.625in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image74.png){width="1.2694444444444444in"
height="1.997813867016623in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image75.png){width="0.9666655730533683in"
height="0.7241688538932634in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image76.png){width="1.5694444444444444in"
height="5.763888888888889in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image77.png){width="1.2916666666666667in"
height="0.6527777777777778in"}

> Schémas électri que
>
> **+ 3.7 v** - Batterie -- Ici c'est un accumulateur, qui peut être
> chargé à l'aide d'un câble USB. Ayant une tension seulement de 3.7
> volts, la batterie est liée à un convertisseur pour augmenter la
> tension.
>
> **3.7 v** **-** Convertisseur de tension -- Pour que le bloc Arduino
> soit activé, une
>
> **5 v** tension de 5 volts exactement est nécessaire.
>
> \- Bloc ARDUINO -- Un tout petit ordinateur, nommé "Micro-Arduino"
> étant le cœur de l'appareil, est implanté au centre.
>
> Celui-ci peut être programmé en langage C++, très semblable à Python.
> Le programme identifie quelle note correspond à quelle fréquence, et
> transmet le signal à cette fréquence donnée.
>
> **Amp** - Amplificateur -- Celui-ci, comme l'indique son nom, amplifie
> le courant électrique. Il représenté d'un triangle, pointant son
> sommet là où le courant sera transmis, selon le schéma de
> l'électricité.
>
> **5 v**
>
> \- Transformateur -- Grâce à une bobine, enroulée un nombre de fois
>
> **10'000 v** précis, autour de soi, la différence des potentiels entre
> les deux pôles augmente et la tension grandit.

**-+** - Étincelle -- Une fois que la tension devient suffisamment
grande, l'air, en jouant le rôle d'un conducteur, permet de faire\
passer le courant électrique de immédiatement de\
l'électrode chargé positivement à celuiqui est chargé\
négativement, tandis que les électronssuivent exactement le chemin
inverse, du pôle moins au pôle plus. Ce processus, provoquant
l'étincelle, dure environ un vingt-millièmede seconde.

11

> [Processus de l'orage]{.underline}
>
> Pour mieux comprendre comment se déroule ce dernier processus, nous
> allons expliquer, à présent, ce qu'est une décharge électrique. Pour
> nous aider, nous allons prendre l'exemple avec la foudre de l'orage :
> Lorsqu'il y a beaucoup de frottement entre les nuages, c'est à dire
> entre les gouttes d'eau, la différence des potentiels entre l'eau et
> la terre accroît. La même chose se passe quand on frotte un bâton
> ébonite contre de la soie ; des électrons sont "arrachés" d'une
> substance et sont "attachés" à l'autre, donc le premier agent perd
> certains de ses électrons est devient chargé positivement, tandis que
> le second agent accumule un excès d'électrons et devient donc chargé
> négativement. Ce processus est appelé --\
> l'électrisation de contact, et on dit qu'entre les deux matériaux il y
> a une différence des potentiels. L'électrisation des corps se produit
> non seulement lors du frottement mais aussi lors de la contiguïté. On
> frotte les objets l'un contre l'autre uniquement pour agrandir leur
> aire de contact. Ainsi les deux corps sont dits -- électrisés.
>
> Pendant l'orage, ce sont les multiples gouttes d'eau qui se frottent
> l'une contre l'autre, et plus précisément, ce sont les molécules d'eau
> et les molécules d'air qui se frictionnent. Les électrons s'accumulent
> en très grande quantité sur un nuage, et au moment où la différence
> des potentiels est suffisamment grande, l'espace aérien entre les
> nuages et la terre devient conducteur. Les atomes ayant un surplus
> d'électrons, qui sont donc des ions négatifs appelés anions, étant
> attirés par les atomes chargés du signe opposé, c'est à dire des ions
> positifs appelés cations, se dirigent l'un vers l'autre, avec une
> vitesse qui grandi au fur et à mesure que les particules se
> rapprochent l'une de l'autre, et heurtent d'autres atomes d'oxygène
> sur leur passage en éjectant leurs électrons, et donc en laissant des
> cations, qui à leur tour s'orientent vers les ions négatifs. Si l'on
> observe la formation de l'éclaire en *slow-motion,* on peut apercevoir
> que celle-ci commence à se former à partir de la surface de la terre,
> car le courant électrique suit le trajet opposé à celui des électrons.
>
> Une fois les ions excités ayant récupéré leurs électrons, ils émettent
> des photons, qui sont la source de lumière que l'on voit. Ce processus
> s'appelle la recombinaison, qui est le processus contraire à
> l'ionisation. Des milliards de photons émis à ce moment-là constituent
> ce "flash" que l'on aperçoit. De plus, la température à cet instant là
> sur le chemin du courant électrique est si grande que les atomes
> excités émettent de la lumière par eux-mêmes. C'est ainsi que se forme
> la foudre, et par analogie : l'étincelle.
>
> Dans notre déchargeur plasmique, des phénomènes comparables se
> produisent, hormis le fait que c'est le générateur qui crée la
> différence des potentiels entre l'électrode chargé positivement et
> l'électrode chargé négativement.

Image trouvée sur
http://www.modafinilsale.com/view/lightning-desktop-wallpaper-24040.html

![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image78.png){width="6.356943350831146in"
height="2.598611111111111in"}

![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image79.png){width="2.4541666666666666in"
height="1.3971402012248468in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image80.png){width="0.45416557305336835in"
height="0.49090004374453194in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image81.png){width="0.4638888888888889in"
height="0.49750437445319334in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image82.png){width="0.445832239720035in"
height="0.4827055993000875in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image83.png){width="2.8375in"
height="0.5952230971128609in"}![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image84.png){width="7.625in"
height="4.638888888888889in"}

> **Chapitre 3.1 -- Description du programme**
>
> Nous avons un générateur de notes qui fonctionne comme un
> interrupteur, en laissant passer le signal électrique du générateur
> d'impulsion à l'amplificateur un nombre de fois précis par seconde, ce
> qui détermine la bonne fréquence d'ondulation. Le générateur
> d'impulsion, lui, émet un signal à une fréquence de 20 kHz, pour la
> seule et unique raison : c'est que le transformateur fonctionne mieux
> ainsi. Or, l'oreille humaine n'est incapable de percevoir de si hautes
> fréquences. C'est pourquoi, nous faisons moduler le courant
> électrique, grâce au générateur de notes, qui pendant la période de
> l'onde sonore donne un signal positif 1, puis un signal nul 0. Ainsi,
> si nous désirons produire, par exemple, la note La : il suffit
> d'imposer la fréquence de 440 Hz au générateur de notes, lequel fera
> passer le signal électrique à 20 kHz quatre cent quarante fois par
> seconde, en introduisant des «silences » (signaux nuls) après chaque
> signal positif 1 de sorte à ce que l'oreille humaine perçoive ces
> micro-explosions avec une fréquence à 440 Hz et implique l'association
> à la note La.
>
> **Générateur de notes**

T = 1 / F

0 1 0 1 0 1

> **Générateur d'impulsion**
>
> **20 kHz**

**Amp**

13

**Journal de Bord**

**Le 1er septembre 2017**

L'idée m'est venue spontanément. Il fallait que je trouve rapidement un
sujet passionnant mais pas trop complexe à la fois. On me reproche
depuis plusieurs semaines qu'un travail de niveau universitaire pourrait
ne pas être admis, sans parler du fait qu'un effort monstrueux devra
être fourni. Une semaine auparavant, j'étais persuadé que mon choix de
construire une énorme bobine de Tesla, comme dans le film : L'apprenti
Sorcier, émerveillera tous les professeurs du collège...\
10 minutes avec mon maître accompagnateur ont suffi pour me dissuader.

Je me souviens, tout à coup, d'une épique vidéo, que notre professeur de
physique nous avait fait voir l'année précédente. Un clip
musicographique, produit par un groupe de physiciens, surnommé --
CYMATICS, qui créent, à l'aide d'instruments de physique, utilisés
généralement dans un laboratoire, une composition musicale formidable.
Un grand flux d'inspiration me traverse, et je sais exactement qu'est ce
qui m'intéresse, désormais.

**Le 7 septembre 2017**

Pendant une semaine, je réfléchissais à propos de ma problématique, et
surtout, du titre qu'il faut choisir. D'abord je voulais faire aussi une
sorte de vidéo avec de la musique, mais je n'ai pas le matériel
nécessaire ni pour filmer, ni pour produire des bruits particuliers.
Sachant que mon travail doit être artistique, je veux aussi lui donner
un aspect scientifique. Alors, grâce aux quelques conseils de ma
famille, je prends décision de nommer mon travail : *Physique --
Acousti*que.

**Le 20 septembre 2017**

J'écris un plan de ce que je souhaite faire, en tout cas : Je souhaite
expliquer d'un point de vue scientifique comment on peut produire un
son. Je souhaite le montrer réellement à l'aide d'un instrument capable
de faire du bruit. Je souhaite manipuler ces sonorités de façon à créer
une certaine mélodie. Et je souhaite effectuer un travail original.

**Le 21 septembre 2017**

Ma problématique sera la suivante : Expliquer le processus physique lors
de la production d'une sonorité, et l'illustrer à l'aide d'un
instrument.

14

**Le 1er novembre 2017**

Je suis un fan de Nicola Tesla et ses expériences. Sous l'effet de mon
inspiration après le film "The Prestige", où nous découvrons un
personnage représentant le scientifique M. Tesla, je viens à l'idée que
l'électricité est un moyen curieux et atypique pour produire de la
musique. C'est ce que je veux ! Mon travail de maturité contiendra ça,
c'est sûr !

**Le 4 décembre 2017**

Sur Internet, je parviens à trouver un kit permettant de composer une
mini-bobine de Tesla. Je le commande en tant que mon cadeau de Noël.

**Le 26 décembre 2017**

J'assemble ma "Micro-Tesla" et j''apprends à l'utiliser. Celle-ci est
incapable de jouer une musique spécifique, elle est donc
non-programmable.

![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image85.png){width="4.127777777777778in"
height="5.502777777777778in"}

15

**Le 7 janvier 2018**

Mon papa me dit qu'il a trouvé ce qu'il me faut sur Amazon.com. C'est un
briquet chinois. Une minuscule boîte noire spéciale, munie de deux
électrodes. "Si on y attache un ordinateur, il sera possible de le
programmer ! " Me dit mon père. Il déniche de son casier un mini bloc
d'Arduino et me l'offre, accompagnée d'une petite batterie.

**Le 2 février 2018**

Le briquet chinois a été livré vendredi. Pendant l'expédition du
produit, j'ai appris au minimum à coder en langage qu'utilise Arduino.
(C'est le langage C++).

Les cours de programmations avec Boris Ischi m'ont amplement facilité
l'affaire. Maintenant, il faut installer toutes les parties
électroniques à l'intérieur d'un corpus. Comme j'adore créer des
animations en trois dimensions, je sais très bien manipuler un éditeur
3D, tel que *Blender*. Néanmoins, il a fallu modeler dans un autre
éditeur -- *Free Cad*, car celui-ci permet à l'aide d'un logiciel qui
s'appelle *Cura,* de convertir le modèle en une succession de couches,
afin de réaliser l'objet sur une imprimante 3D. Mon papa en a une depuis
son 45ème anniversaire.

Voici une capture d'écran, où l'on voit le processus de l'assemblement
du corpus, dans l'éditeur *Free Cad*.

> ![](vertopal_b2f3a25d79b64c4187202483f12d8a30/media/image86.png){width="6.665277777777778in"
> height="3.5374989063867015in"}

16

**Le 15 mars 2018**

C'est avec l'aide de mon papa que nous avons réussis à constituer notre
engin : c'est un parallélépipède de couleur noir, avec deux électrodes
sortants d'un côté, et un bouton rouge au centre de la boîte.

**Conclusion**

Ayant étudié la nature de la musique, en tant que son, nous avons
considéré plusieurs façons d'en produire, et nous en avons inventée une
nouvelle. Pour comprendre le fonctionnement de ce dernier, nous avons
expliqué les mécanismes en faisant des analogies à des exemples que nous
comprenons plus facilement, et nous avons fourni des illustrations
détaillées, afin qu'un nouvel étudiant désirant construire le même
dispositif puisse le faire.

Ce travail m'a permis d'acquérir des connaissances sur l'électronique,
que j'espère pouvoir approfondir avec plus de simplicité lorsque
j'étudierais l'ingénierie. J'ai également pris du plaisir à réaliser ma
mélodie favorite à l'aide d'un moyen exceptionnel, consistant à produire
un arc électrique musical, qui me passionne beaucoup. Grâce à
l'élaboration de ce travail j'ai obtenu une bonne expérience, qui me
permettra certainement d'améliorer la qualité de mon projet suivant.

17

REMERCIEMENTS

Je tiens à remercier énormément les personnes qui m'ont aidé à réaliser
ce projet, à savoir :

Jan Grote, mon mentor, qui m'a guidé dans ma partie écrite en me
corrigeant sur les points importants.

Mon père, Igor Kreslo, professeur de physique à l'université de Bern,
grâce à qui j'ai trouvé des réponses à toutes les questions qui
m'intéressaient, concernant le travail, et qui m'a aidé à structurer les
parties constituant l'appareil.

Boris Ischi, mon professeur de physique, qui m'a aidé à formuler ma
problématique.

**"**My science teacher showed us this video and i just thought it was
going to be like another horribly animated video and the music would
sound like its from a kids show, but when he showed us it i was
completely flabbergasted. This deserves so much

more attention"\
- commentaire tiré de de la vidéo de CYMATICS
https://www.youtube.com/watch?v=Q3oItpVa9fs

18

> [Sources]{.underline}\
> Sources dont je me suis inspiré pendant la réalisation de mon travail
> :\
> https://www.youtube.com/watch?v=Q3oItpVa9fs -- Vidéo du groupe
> CYMATICS\
> https://www.wikipedia.org/ - Wikipédia, où j'ai trouvé les définitions
> des mots complexes, utilisés dans mon travail. Dossier de la CRP « Le
> son et la lumière comme phénomènes ondulatoires », prêté par M.Grote,
> où j'ai trouvé des explications des phénomènes physiques concernant
> mon travail.

19

**Annexe 1** -- Ce code ARDUINO permet de jouer les 3 notes : \<\<do,
re, mi\>\>

float tdel=30; //30us period of HF

// the setup function runs once when you press reset or power the board
void setup() {\
// initialize digital pin LED_BUILTIN as an output.

pinMode(LED_BUILTIN, OUTPUT);\
pinMode(4, OUTPUT);\
digitalWrite(4, LOW);\
}

// the loop function runs over and over again forever void loop()\
{\
//PlayGammas();\
PlayBeliever();\
delay(1500);\
}\
void PlayBeliever()\
{

> PlayNote(\"A4\",10);\
> PlayNote(\"B4\",10);\
> PlayNote(\"C5\",10);

}\
void PlayGammas()\
{\
PlayNote(\"C3\",4);\
PlayNote(\"D3\",4);\
PlayNote(\"E3\",4);\
PlayNote(\"F3\",4);\
PlayNote(\"G3\",4);\
PlayNote(\"A3\",4);\
PlayNote(\"B3\",4);\
PlayNote(\"C4\",4);\
PlayNote(\"D4\",4);\
PlayNote(\"E4\",4);\
PlayNote(\"F4\",4);\
PlayNote(\"G4\",4);\
PlayNote(\"A4\",4);\
PlayNote(\"B4\",4);\
PlayNote(\"C5\",4);\
PlayNote(\"D5\",4);\
PlayNote(\"E5\",4);\
PlayNote(\"F5\",4);\
PlayNote(\"G5\",4);

> PlayNote(\"A5\",4);\
> PlayNote(\"B5\",4);\
> PlayNote(\"C6\",16);

return;\
}\
void PlayNote( char \*note, int tackts)\
{\
unsigned long Duration_ms;\
Duration_ms=tackts\*125;\
int div=1;\
int freq;\
switch (note\[1\]) {\
case \'7\': div=1; break;\
case \'6\': div=2; break;\
case \'5\': div=4; break;\
case \'4\': div=8; break;\
case \'3\': div=16; break;\
div=1;\
}\
switch (note\[0\]) {\
case \'C\': freq=2093/div; break;\
case \'c\': freq=2217/div; break;\
case \'D\': freq=2349/div; break;\
case \'d\': freq=2489/div; break;\
case \'E\': freq=2637/div; break;\
case \'F\': freq=2793/div; break;\
case \'f\': freq=2960/div; break;\
case \'G\': freq=3136/div; break;\
case \'g\': freq=3322/div; break;\
case \'A\': freq=3520/div; break;\
case \'a\': freq=3729/div; break;\
case \'B\': freq=3951/div; break;\
}\
PlayTone(freq, Duration_ms);\
delay(25);\
return;\
}

unsigned long dt;\
unsigned long hp;\
unsigned long tp0;\
unsigned long tt0;

void PlayTone( int Frequency_Hz, unsigned long Duration_ms) {\
hp=500000/Frequency_Hz; //half-period\
dt=Duration_ms\*1000;\
//dt=300000;\
tt0=micros();\
while(micros()-tt0\<dt)\
{

tp0=micros();\
while(micros()-tp0\<hp)\
{\
digitalWrite(4, HIGH);\
delayMicroseconds(tdel);\
digitalWrite(4, LOW);\
delayMicroseconds(tdel);\
}\
while(micros()-tp0\<2\*hp)\
{ //just wait here\
}\
}\
return;\
}

**Annexe 2 --** Cette composition permet de jouer la chanson « Secrets »
du groupe One Republic, sur le briquet.

// the loop function runs over and over again forever\
void loop()\
{\
//PlayGammas();\
PlayBeliever();\
delay(0);\
}\
void PlayBeliever()\
{\
PlayNote(\"D4\",3);\
PlayNote(\"f4\",3);\
PlayNote(\"A4\",3);\
PlayNote(\"f4\",3);\
PlayNote(\"A4\",3);\
PlayNote(\"f4\",3);\
PlayNote(\"D4\",3);\
PlayNote(\"f4\",3);

PlayNote(\"D4\",3);\
PlayNote(\"f4\",3);\
PlayNote(\"A4\",3);\
PlayNote(\"f4\",3);\
PlayNote(\"A4\",3);\
PlayNote(\"f4\",3);\
PlayNote(\"D4\",3);\
PlayNote(\"f4\",3);

PlayNote(\"c4\",3);\
PlayNote(\"f4\",3);\
PlayNote(\"A4\",3);\
PlayNote(\"f4\",3);\
PlayNote(\"A4\",3);\
PlayNote(\"f4\",3);\
PlayNote(\"c4\",3);\
PlayNote(\"f4\",3);

PlayNote(\"c4\",3);\
PlayNote(\"f4\",3);\
PlayNote(\"A4\",3);\
PlayNote(\"f4\",3);\
PlayNote(\"A4\",3);\
PlayNote(\"f4\",3);\
PlayNote(\"c4\",3);\
PlayNote(\"f4\",3);

> PlayNote(\"B3\",3);\
> PlayNote(\"D4\",3);\
> PlayNote(\"B4\",3);\
> PlayNote(\"D4\",3);\
> PlayNote(\"B4\",3);\
> PlayNote(\"D4\",3);\
> PlayNote(\"B3\",3);\
> PlayNote(\"D4\",3);
>
> PlayNote(\"B3\",3);\
> PlayNote(\"D4\",3);
>
> PlayNote(\"B4\",3);\
> PlayNote(\"D4\",3);\
> PlayNote(\"B4\",3);\
> PlayNote(\"D4\",3);\
> PlayNote(\"B3\",3);\
> PlayNote(\"D4\",3);
>
> PlayNote(\"G3\",3);\
> PlayNote(\"D4\",3);\
> PlayNote(\"B4\",3);\
> PlayNote(\"D4\",3);\
> PlayNote(\"B4\",3);\
> PlayNote(\"D4\",3);\
> PlayNote(\"G3\",3);\
> PlayNote(\"D4\",3);
>
> PlayNote(\"G3\",3);\
> PlayNote(\"D4\",3);\
> PlayNote(\"G4\",3);\
> PlayNote(\"D4\",3);\
> PlayNote(\"G4\",3);\
> PlayNote(\"D4\",3);\
> PlayNote(\"G4\",3);\
> PlayNote(\"D4\",3);

//delay(125);\
}
