/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86337
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 += ((((/* implicit */int) (short)-12554)) & (var_7));
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-12544)) ? (1420202324U) : (956226980U)));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 11; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
            {
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 956226979U)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (3074297544888248647LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)26)) && (((/* implicit */_Bool) (unsigned short)17729))))) : (((((/* implicit */int) (short)-12554)) + (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))))));
                var_12 &= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -2147483643)) ? ((+(7888226717083486551LL))) : (((/* implicit */long long int) arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 + 3])))), (((/* implicit */long long int) (((-(1041655385))) > (((((/* implicit */_Bool) (signed char)-74)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)12562)))))))));
                var_13 *= ((/* implicit */_Bool) arr_1 [i_1 - 1] [i_0 - 1]);
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((int) (signed char)123)) ^ (2147483647))))));
            }
            for (int i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
            {
                arr_12 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */int) var_3);
                /* LoopNest 2 */
                for (signed char i_4 = 3; i_4 < 13; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        {
                            var_15 *= ((/* implicit */_Bool) (-2147483647 - 1));
                            var_16 = ((/* implicit */int) (unsigned char)19);
                            var_17 = ((/* implicit */long long int) min((var_17), (-6758840436250081841LL)));
                        }
                    } 
                } 
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) min((max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-123)) : (-153945709))), (((((/* implicit */int) arr_9 [i_3] [i_1] [i_0] [i_3])) + (2147483643))))), (((int) ((signed char) arr_13 [i_3] [i_3]))))))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_21 [12U] |= (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (arr_13 [i_1 + 2] [i_0 - 1])))));
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (max((((((/* implicit */_Bool) (short)-12563)) ? (((/* implicit */int) arr_1 [i_0] [i_6])) : (((/* implicit */int) (unsigned short)57210)))), (((/* implicit */int) (unsigned short)28672)))))))));
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_7 [i_0 - 1] [i_1] [i_6] [i_6]))));
                var_21 ^= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28067)) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) (unsigned short)0))))) ? (min((var_4), (var_5))) : (((-5425275897919444858LL) + (var_4))))), (((long long int) var_6))));
            }
            var_22 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) max((var_4), (-20LL)))) ? ((+(((/* implicit */int) var_2)))) : (min((((/* implicit */int) var_6)), (-1460657419)))))));
            arr_22 [(short)4] [i_1] [(signed char)12] |= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_19 [i_1] [i_1 - 1] [(_Bool)1])) ? (((/* implicit */int) (short)-28071)) : (368149934))), (((/* implicit */int) ((418049949U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)114))))))));
            var_23 -= ((/* implicit */_Bool) min((((long long int) ((7800858701244025947ULL) + (((/* implicit */unsigned long long int) arr_6 [i_1 - 1] [i_1 - 1] [i_1 + 3] [i_0]))))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [(unsigned short)0] [i_1] [i_1])) || (((/* implicit */_Bool) (-2147483647 - 1)))))) >> (((14674212946505640678ULL) - (14674212946505640649ULL))))))));
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 11; i_7 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 14; i_8 += 4) 
            {
                for (unsigned int i_9 = 0; i_9 < 14; i_9 += 2) 
                {
                    {
                        arr_32 [i_0] [i_7 + 1] [i_0] = ((/* implicit */unsigned char) var_3);
                        var_24 -= ((/* implicit */int) ((((/* implicit */_Bool) (short)-12696)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-12552)) ? (1103552040U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49352)))))) : (((((/* implicit */long long int) ((/* implicit */int) var_6))) ^ (646997597149193557LL)))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_10 = 0; i_10 < 14; i_10 += 2) 
            {
                /* LoopSeq 3 */
                for (long long int i_11 = 2; i_11 < 11; i_11 += 2) 
                {
                    var_25 |= ((/* implicit */long long int) (_Bool)0);
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((unsigned long long int) 16)))));
                    var_27 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_28 += ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (~(-4900451930192796859LL))))));
                    arr_39 [(unsigned short)10] [i_7] [i_7 + 2] [i_0] [(unsigned char)5] = ((/* implicit */int) var_9);
                }
                for (unsigned char i_13 = 1; i_13 < 11; i_13 += 2) 
                {
                    var_30 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_10] [i_0 - 1] [i_13 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (426196756U)));
                    var_31 = ((/* implicit */unsigned short) ((var_1) == (((((/* implicit */int) (unsigned char)1)) - (138424137)))));
                }
                /* LoopSeq 1 */
                for (unsigned int i_14 = 1; i_14 < 12; i_14 += 4) 
                {
                    var_32 ^= ((/* implicit */int) (+(((unsigned int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (long long int i_15 = 2; i_15 < 12; i_15 += 4) 
                    {
                        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) (((-2147483647 - 1)) / ((-2147483647 - 1))))) ? (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) (unsigned char)193)))) : (((/* implicit */int) (short)-12553)))))));
                        var_34 *= ((/* implicit */unsigned long long int) arr_31 [i_15 + 2] [i_14] [i_10] [i_7] [i_0]);
                    }
                }
            }
        }
        var_35 -= ((/* implicit */signed char) max(((!(((/* implicit */_Bool) (signed char)65)))), ((!(arr_38 [i_0] [i_0] [i_0] [i_0 - 1] [i_0])))));
        var_36 += ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)6662))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)116), ((unsigned char)17))))) : (((long long int) (_Bool)1))))), (min((arr_29 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) max((var_0), (var_6))))))));
    }
    /* vectorizable */
    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) /* same iter space */
    {
        var_37 = ((/* implicit */int) min((var_37), (((arr_35 [i_16] [i_16] [(signed char)0] [i_16] [i_16 - 1] [i_16 - 1]) ? (((/* implicit */int) arr_35 [(unsigned char)12] [i_16] [10LL] [i_16] [i_16] [i_16])) : (((/* implicit */int) var_6))))));
        arr_50 [i_16] = ((/* implicit */_Bool) (~(2866458120U)));
    }
    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_19 = 0; i_19 < 14; i_19 += 4) 
            {
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    {
                        arr_62 [i_17] [i_17] = max((min((max((((/* implicit */signed char) (_Bool)1)), (arr_9 [i_19] [i_17 - 1] [i_18 - 1] [i_19]))), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)122))) <= (var_3)))))), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1380631078U)) ? (17119679648320505194ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)66)))))) && ((!(((/* implicit */_Bool) var_0))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((-2556881) & (((int) max((2147483647), (((/* implicit */int) (unsigned char)127))))))))));
                            var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) min((max((-16), (max((18), (((/* implicit */int) var_2)))))), (((((/* implicit */_Bool) arr_20 [i_17])) ? (((/* implicit */int) arr_37 [i_17 - 1] [i_18] [i_19] [i_20])) : (((/* implicit */int) (short)29899)))))))));
                        }
                        for (unsigned char i_22 = 1; i_22 < 11; i_22 += 4) 
                        {
                            var_40 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113))) : (arr_13 [i_18 - 1] [i_22 - 1])))) ? ((-(-4900451930192796859LL))) : (((/* implicit */long long int) ((int) arr_13 [i_18 - 1] [i_22 + 3])))));
                            var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) -1895099951))))))));
                        }
                        var_42 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) (unsigned short)40730)))))))), (((((/* implicit */_Bool) ((2556881) >> (((((/* implicit */int) (unsigned short)36331)) - (36317)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10351)))))) : (16777215ULL)))));
                        var_43 -= max((((/* implicit */int) max(((!(((/* implicit */_Bool) (unsigned char)59)))), ((!(((/* implicit */_Bool) var_0))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_67 [i_17] [i_17] [i_19] [i_20] [i_17])), (arr_48 [i_17])))) ? (((/* implicit */int) min(((short)6662), (((/* implicit */short) (signed char)123))))) : (((/* implicit */int) (unsigned short)15)))));
                        var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) var_9))));
                    }
                } 
            } 
            var_45 = ((/* implicit */_Bool) min((var_45), (((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)0)))))))));
            /* LoopSeq 3 */
            for (int i_23 = 0; i_23 < 14; i_23 += 4) /* same iter space */
            {
                var_46 += ((/* implicit */unsigned char) (~(((/* implicit */int) min((max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)511))), (((/* implicit */unsigned short) arr_11 [i_17 - 1])))))));
                var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) min((min((max((-6767445168557699718LL), (((/* implicit */long long int) arr_20 [5ULL])))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)216))))))), (((/* implicit */long long int) max(((unsigned char)32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)6662)) && (((/* implicit */_Bool) var_7)))))))))))));
            }
            for (int i_24 = 0; i_24 < 14; i_24 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_25 = 0; i_25 < 14; i_25 += 2) 
                {
                    for (short i_26 = 1; i_26 < 10; i_26 += 2) 
                    {
                        {
                            arr_83 [i_25] [i_25] [i_25] [i_25] [i_26] [i_25] = ((/* implicit */unsigned int) min(((unsigned char)32), ((unsigned char)39)));
                            var_48 *= ((/* implicit */signed char) (~(min((((/* implicit */unsigned int) (_Bool)1)), (arr_13 [i_17 - 1] [i_18 - 1])))));
                        }
                    } 
                } 
                var_49 *= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)38879)), (var_5)))))))));
                var_50 = ((/* implicit */unsigned long long int) min((var_50), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)16))))), (min((((/* implicit */unsigned short) (signed char)0)), ((unsigned short)65519)))))) >> (((((/* implicit */int) arr_55 [i_17 - 1])) - (37488))))))));
            }
            for (int i_27 = 0; i_27 < 14; i_27 += 4) /* same iter space */
            {
                var_51 = ((/* implicit */unsigned char) min((var_51), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1428509175U)) ? (((/* implicit */int) (unsigned short)27267)) : (((/* implicit */int) (unsigned short)40690))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)82))) != (3879428669U)))) : ((-2147483647 - 1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((-1) <= (((/* implicit */int) (signed char)123))))))) : ((-(var_3))))))));
                var_52 = ((/* implicit */unsigned char) min((var_52), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)65519)), (8U)))) ? (((/* implicit */long long int) -68857929)) : (max((((/* implicit */long long int) var_9)), (var_5))))), (((/* implicit */long long int) max((((/* implicit */unsigned char) arr_35 [i_17 - 1] [i_17 - 1] [i_27] [(unsigned short)2] [i_17] [i_17 - 1])), ((unsigned char)62)))))))));
            }
        }
        var_53 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (~(((/* implicit */int) min((arr_44 [i_17]), ((_Bool)1))))))), (min((min((((/* implicit */long long int) -831673997)), (arr_56 [i_17] [i_17] [i_17] [5]))), (((/* implicit */long long int) max((2556857), (((/* implicit */int) (_Bool)1)))))))));
        var_54 = ((/* implicit */unsigned short) ((((/* implicit */int) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7797759149576391541LL))) > (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)45379)))))))) != (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)123))) != (-2930223894993952654LL))))) == (var_3))))));
        /* LoopSeq 3 */
        for (unsigned int i_28 = 0; i_28 < 14; i_28 += 4) 
        {
            arr_89 [i_28] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((int) (unsigned short)5453))))) ? (((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60093))) & (3779263299U)))) : (((/* implicit */long long int) (~(((((/* implicit */unsigned int) 1980952179)) ^ (62914560U))))))));
            var_55 = ((/* implicit */unsigned char) min((var_55), (((/* implicit */unsigned char) ((unsigned short) (~(((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))))));
        }
        for (long long int i_29 = 0; i_29 < 14; i_29 += 4) 
        {
            var_56 += ((/* implicit */unsigned int) ((int) (~(max((((/* implicit */int) (signed char)5)), (2147483647))))));
            arr_92 [i_29] [i_17 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */long long int) min((((/* implicit */int) ((_Bool) (signed char)3))), ((~(((/* implicit */int) (signed char)-8))))))) : (max((((/* implicit */long long int) arr_40 [i_29] [i_17 - 1] [i_17] [i_29])), (17LL)))));
        }
        for (long long int i_30 = 0; i_30 < 14; i_30 += 4) 
        {
            var_57 ^= ((/* implicit */int) (short)0);
            /* LoopNest 2 */
            for (int i_31 = 4; i_31 < 11; i_31 += 2) 
            {
                for (int i_32 = 0; i_32 < 14; i_32 += 4) 
                {
                    {
                        var_58 = ((/* implicit */signed char) min((var_58), (((/* implicit */signed char) var_1))));
                        var_59 += ((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)39)), ((short)0)))) ? (var_4) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)17)))))))));
                        var_60 ^= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) (signed char)-29))))) ^ (max((((/* implicit */int) (_Bool)1)), (arr_36 [i_17] [(unsigned short)6] [i_31] [i_32] [i_17 - 1] [i_31 - 4])))));
                    }
                } 
            } 
            arr_101 [i_17] = ((/* implicit */unsigned char) (((~(min((((/* implicit */int) (signed char)-8)), (880914745))))) > ((+(((/* implicit */int) max((var_8), (var_2))))))));
        }
        var_61 = ((/* implicit */signed char) min((var_61), (((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) -845998471)), (arr_94 [i_17 - 1] [i_17 - 1]))) != (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -68857917)), (3U)))))))));
    }
    var_62 |= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((unsigned long long int) (short)0)))))));
    var_63 = ((/* implicit */unsigned int) (!(var_8)));
}
