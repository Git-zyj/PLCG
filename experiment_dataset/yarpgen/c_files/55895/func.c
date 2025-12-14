/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55895
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
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) /* same iter space */
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */signed char) 13312681908341670577ULL);
                    arr_10 [i_0 + 1] = ((/* implicit */signed char) (_Bool)0);
                    arr_11 [i_0] [i_1] [i_2] = ((((/* implicit */int) (signed char)-114)) > (2147483647));
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (-2147483647 - 1))))) || (((/* implicit */_Bool) ((((/* implicit */int) (short)0)) | (((/* implicit */int) (short)-12588)))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 3; i_3 < 20; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((((_Bool) (_Bool)0)) && (((/* implicit */_Bool) ((unsigned char) (_Bool)0)))));
                        var_20 += ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) (short)-12588)) >= (2147483647))))));
                        var_21 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)35683))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)2047)) ^ (((/* implicit */int) (signed char)113))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (short)12588)))))));
                    }
                    for (short i_4 = 2; i_4 < 20; i_4 += 1) 
                    {
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) max(((+(((/* implicit */int) (signed char)-122)))), (((/* implicit */int) ((signed char) (+((-2147483647 - 1)))))))))));
                        /* LoopSeq 4 */
                        for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (short)971))));
                            var_25 = ((/* implicit */_Bool) (+(4153366936U)));
                            var_26 = ((/* implicit */signed char) min(((short)-971), ((short)-12588)));
                            var_27 = ((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)15))))));
                            var_28 += ((/* implicit */signed char) (_Bool)1);
                        }
                        for (signed char i_6 = 3; i_6 < 19; i_6 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)31360)))) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)2047)))))));
                            var_30 = ((/* implicit */int) (-(11526293139339099963ULL)));
                        }
                        for (short i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            var_31 = max((((1U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-11158))))), (((/* implicit */unsigned int) (short)-10777)));
                            var_32 *= ((/* implicit */short) (+(max((((/* implicit */unsigned long long int) (short)11871)), (((14885754557151055380ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15266)))))))));
                        }
                        for (short i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) (((~(((/* implicit */int) (short)32767)))) <= (max((((/* implicit */int) (unsigned char)183)), (2147483647))))))));
                            var_34 = ((/* implicit */short) (~(((/* implicit */int) ((short) (short)32767)))));
                            arr_31 [i_0 - 1] [i_4] [i_2] [i_4 - 1] [i_8] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) ((unsigned short) (short)-1547)))))));
                            var_35 -= ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (short)971)) >= (((/* implicit */int) (_Bool)1)))))));
                            var_36 = ((/* implicit */short) (+(((((/* implicit */int) (short)27538)) ^ (((/* implicit */int) (short)0))))));
                        }
                    }
                    for (unsigned short i_9 = 4; i_9 < 21; i_9 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_10 = 2; i_10 < 21; i_10 += 2) 
                        {
                            var_37 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3330418182U))));
                            var_38 = ((/* implicit */signed char) ((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                            arr_37 [i_0 - 2] [i_1] [i_2] [i_9] [i_10] [i_0] [i_0 - 2] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (unsigned short)18388)) / (((/* implicit */int) (short)-11872))))));
                            var_39 = (-(141600360U));
                        }
                        for (signed char i_11 = 0; i_11 < 22; i_11 += 1) 
                        {
                            var_40 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)11872)) + (((/* implicit */int) (unsigned short)63488)))))));
                            arr_41 [i_0] [i_1] [i_2] = ((((((/* implicit */unsigned int) ((/* implicit */int) (short)971))) * (0U))) > (((/* implicit */unsigned int) ((((/* implicit */int) (short)11871)) & ((-(((/* implicit */int) (unsigned char)255))))))));
                        }
                        arr_42 [i_9] [i_2] [i_1 + 2] [i_1] [i_0] [i_0] = ((/* implicit */short) (unsigned short)63488);
                    }
                    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 1) 
                    {
                        var_41 = ((signed char) ((((/* implicit */int) (short)-972)) / (-907937876)));
                        var_42 |= ((/* implicit */int) ((signed char) max(((short)972), (((/* implicit */short) (signed char)-4)))));
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 4) /* same iter space */
                {
                    arr_49 [i_1 + 2] = ((/* implicit */signed char) ((((/* implicit */int) (short)-11872)) < (((/* implicit */int) (_Bool)0))));
                    var_43 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (signed char)(-127 - 1)))));
                    var_44 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) ^ (689069729U)));
                }
                /* vectorizable */
                for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 4) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (signed char i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_16 = 0; i_16 < 22; i_16 += 4) 
                        {
                            var_45 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                            var_46 -= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)20859))));
                        }
                        var_47 = ((/* implicit */_Bool) ((short) (signed char)30));
                        arr_58 [i_15] [i_0 - 2] [i_14] [i_15] = ((short) 2261628077U);
                        arr_59 [i_0 - 2] [i_1 + 1] [i_1] [i_15] [i_0 - 1] [i_14] = ((/* implicit */short) (~(((/* implicit */int) (signed char)22))));
                    }
                    for (signed char i_17 = 2; i_17 < 20; i_17 += 2) /* same iter space */
                    {
                        arr_62 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)8192))));
                        var_48 |= ((/* implicit */signed char) (+(262080U)));
                    }
                    for (signed char i_18 = 2; i_18 < 20; i_18 += 2) /* same iter space */
                    {
                        var_49 = ((/* implicit */unsigned int) min((var_49), (((/* implicit */unsigned int) (short)971))));
                        var_50 = ((/* implicit */unsigned short) max((var_50), (((/* implicit */unsigned short) ((57398302) / (-617030348))))));
                        var_51 = ((/* implicit */short) min((var_51), (((/* implicit */short) ((((/* implicit */int) (short)-7717)) * (((/* implicit */int) (short)-10299)))))));
                        var_52 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)42461)) - (((/* implicit */int) (unsigned short)29349))));
                    }
                    for (signed char i_19 = 2; i_19 < 20; i_19 += 2) /* same iter space */
                    {
                        arr_69 [i_0] [i_1 + 1] [i_14] [i_19 - 2] = ((/* implicit */short) ((((/* implicit */int) (short)(-32767 - 1))) <= (((/* implicit */int) (short)-972))));
                        var_53 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-971)) ^ (((/* implicit */int) (short)0))));
                        arr_70 [i_0] [i_1] [i_14] [i_19 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) (~(4153366936U)))) || (((/* implicit */_Bool) (short)-972))));
                        var_54 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) (short)0)))));
                        var_55 = ((/* implicit */unsigned short) max((var_55), (((/* implicit */unsigned short) (-((-(3354537962393924268ULL))))))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_21 = 0; i_21 < 22; i_21 += 4) /* same iter space */
                        {
                            var_56 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)0))));
                            var_57 &= ((/* implicit */unsigned char) (~(2261628077U)));
                            var_58 = ((/* implicit */unsigned long long int) max((var_58), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)72)) >> (((((/* implicit */int) (short)-971)) + (984))))))));
                        }
                        for (unsigned short i_22 = 0; i_22 < 22; i_22 += 4) /* same iter space */
                        {
                            arr_81 [i_0 - 1] [i_1] [i_14] [i_20] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-10299)) == (((/* implicit */int) (unsigned short)43655))));
                            var_59 = (-(((/* implicit */int) (unsigned char)73)));
                            var_60 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-10299))));
                            arr_82 [i_0 - 1] [i_1 + 2] [i_1 + 1] [i_20] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) + (((-871296119) & (((/* implicit */int) (short)-30123))))));
                        }
                        for (unsigned short i_23 = 0; i_23 < 22; i_23 += 4) /* same iter space */
                        {
                            var_61 += ((/* implicit */short) (~(((/* implicit */int) (short)30122))));
                            var_62 = ((((/* implicit */unsigned int) ((/* implicit */int) (short)23848))) * (92409025U));
                        }
                        var_63 |= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)0))));
                    }
                    for (signed char i_24 = 0; i_24 < 22; i_24 += 2) 
                    {
                        var_64 *= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)82))));
                        var_65 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) (unsigned char)255))));
                    }
                    for (unsigned long long int i_25 = 0; i_25 < 22; i_25 += 4) 
                    {
                        var_66 |= ((/* implicit */signed char) (-(((/* implicit */int) (short)-23))));
                        arr_92 [i_0] [i_1] [i_25] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)21881)) + (((/* implicit */int) (short)-30122))));
                        var_67 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)4095))));
                    }
                    var_68 -= ((/* implicit */signed char) ((((unsigned long long int) (unsigned char)1)) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26641)))));
                    var_69 = ((((/* implicit */_Bool) (short)4095)) || (((/* implicit */_Bool) ((((/* implicit */int) (short)0)) + (((/* implicit */int) (short)10298))))));
                }
                var_70 ^= ((/* implicit */signed char) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)112)))))))));
                var_71 = ((/* implicit */signed char) min((var_71), (((/* implicit */signed char) (!(((((/* implicit */int) (short)10298)) >= (((/* implicit */int) (short)22599)))))))));
            }
        } 
    } 
    var_72 = ((/* implicit */short) (!(((/* implicit */_Bool) var_18))));
}
