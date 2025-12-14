/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74255
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 3) /* same iter space */
    {
        var_19 &= ((((/* implicit */long long int) var_4)) % (8296343429875182938LL));
        var_20 |= ((/* implicit */long long int) (-(arr_1 [i_0 - 2] [i_0 + 2])));
    }
    for (signed char i_1 = 2; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) ((int) ((((((/* implicit */long long int) var_4)) + (274877904896LL))) * (((/* implicit */long long int) ((unsigned int) arr_2 [i_1 + 1] [i_1]))))));
        /* LoopSeq 3 */
        for (int i_2 = 4; i_2 < 19; i_2 += 4) 
        {
            var_22 = ((/* implicit */unsigned int) var_13);
            arr_7 [i_1] [i_2 - 3] = ((/* implicit */int) ((unsigned int) max((arr_5 [i_2 - 2] [i_2 + 1] [5U]), (((/* implicit */long long int) var_1)))));
        }
        for (short i_3 = 1; i_3 < 16; i_3 += 3) 
        {
            var_23 = ((/* implicit */unsigned char) 8296343429875182927LL);
            var_24 |= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_3]))) & (8296343429875182929LL))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) 4294967289U))))))));
        }
        for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            arr_13 [i_4] [i_4] [i_1] = ((/* implicit */long long int) (!((((!(((/* implicit */_Bool) var_1)))) && (((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (-8296343429875182945LL))))))));
            var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_1 [i_1 - 1] [i_1 - 1]), (1020774240))))));
            var_26 = ((/* implicit */short) ((((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_12 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)76))) : (3816299873U)))))) > (min((min((-7637732318205084906LL), (((/* implicit */long long int) var_11)))), (arr_5 [i_1] [i_4] [i_4])))));
            var_27 = ((/* implicit */int) ((unsigned int) min((max((arr_1 [i_1] [i_4]), (((/* implicit */int) (short)-11978)))), (((/* implicit */int) var_9)))));
        }
        /* LoopNest 3 */
        for (unsigned int i_5 = 3; i_5 < 19; i_5 += 3) 
        {
            for (int i_6 = 1; i_6 < 17; i_6 += 3) 
            {
                for (long long int i_7 = 3; i_7 < 17; i_7 += 3) 
                {
                    {
                        var_28 = ((/* implicit */long long int) (+((+((-2147483647 - 1))))));
                        arr_24 [17LL] [i_5] [i_5] [i_7] = ((((/* implicit */_Bool) ((int) 478667422U))) ? (((long long int) 1160270912U)) : (((/* implicit */long long int) max((3816299873U), (((/* implicit */unsigned int) arr_23 [i_5 - 1] [i_6 + 3] [i_5] [i_7 - 2] [i_7 - 3]))))));
                        /* LoopSeq 3 */
                        for (int i_8 = 1; i_8 < 18; i_8 += 4) 
                        {
                            var_29 = ((/* implicit */short) (+(((((-1448702543) + (2147483647))) << (((arr_5 [10] [i_5 - 2] [i_6 + 3]) - (2185618098451720790LL)))))));
                            var_30 = arr_20 [(_Bool)1] [i_5 - 1] [i_5 - 3];
                        }
                        for (short i_9 = 1; i_9 < 17; i_9 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) (-(2752754001U)))), (-179799112841217035LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((4294967295U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (max((1972962149U), (((/* implicit */unsigned int) arr_25 [11LL] [i_5] [i_6 + 3])))) : (((((/* implicit */unsigned int) var_1)) & (arr_17 [i_5]))))))));
                            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) (_Bool)0)))))) ? ((+(((arr_12 [i_1]) + (4294967295U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (arr_4 [i_1]))))))))));
                        }
                        for (int i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            arr_31 [i_1 + 2] [i_1] [i_10] [i_1] [i_1] &= ((/* implicit */int) ((unsigned int) ((arr_22 [i_5 + 1] [i_6 + 3] [i_7 + 3] [i_10]) / (((var_10) + (((/* implicit */long long int) 1020774240)))))));
                            var_33 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) 3791149415U)) ? (arr_14 [i_10] [i_7 + 1] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)109)))))))) || (((/* implicit */_Bool) 722017335)));
                            arr_32 [i_1 + 2] [i_5 - 2] [i_5] [(signed char)1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) 2198486384640LL)))))))) ^ (((((/* implicit */_Bool) ((-97486600) % (((/* implicit */int) (unsigned char)86))))) ? (((/* implicit */long long int) max((2656533842U), (((/* implicit */unsigned int) var_9))))) : (((var_14) % (((/* implicit */long long int) -1282555462))))))));
                            var_34 = ((/* implicit */unsigned int) (!(arr_25 [i_1] [i_1] [i_1 + 2])));
                        }
                    }
                } 
            } 
        } 
        var_35 = ((/* implicit */unsigned int) (-((~(((/* implicit */int) (_Bool)1))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_36 = ((/* implicit */_Bool) max((min((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (-291408035533580466LL))))), (((/* implicit */long long int) ((((/* implicit */int) ((4294967295U) > (((/* implicit */unsigned int) -20))))) % (((/* implicit */int) arr_8 [i_11])))))));
        /* LoopSeq 1 */
        for (long long int i_12 = 2; i_12 < 16; i_12 += 4) 
        {
            var_37 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((953813737) & (((/* implicit */int) (signed char)-109))))) * (((((/* implicit */_Bool) min((35273828), ((-2147483647 - 1))))) ? (((/* implicit */unsigned int) -2147483646)) : (112U)))));
            arr_37 [i_11] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_11] [i_12 + 2] [i_12 - 1])) || (((/* implicit */_Bool) arr_1 [i_12 - 2] [i_12 + 1])))))));
        }
    }
}
