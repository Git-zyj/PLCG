/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91185
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
    var_19 = ((/* implicit */unsigned char) ((long long int) ((_Bool) var_7)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 1; i_4 < 23; i_4 += 2) 
                        {
                            arr_14 [i_1] [i_1] [i_2 + 1] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39189))) % (13194139533312ULL)));
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (+(((2376145889U) + (var_14))))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                        {
                            arr_17 [i_0] [i_1 - 1] [i_2 - 2] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_6 [i_0] [i_0] [i_3] [i_0]) << (((var_6) - (3967267193U)))))) ? (((1818259225U) << (((/* implicit */int) var_3)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_13) <= (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_5] [i_1] [i_2 - 1] = ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_1]);
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_10 [i_0]))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
                        {
                            var_22 = ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1])) ? (((/* implicit */int) ((_Bool) (unsigned char)12))) : ((((_Bool)0) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (_Bool)1)))));
                            var_23 = ((/* implicit */_Bool) ((unsigned int) 2368269718567820270LL));
                            var_24 = ((arr_2 [i_1] [i_2 - 1] [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 + 1]))));
                            var_25 = ((/* implicit */long long int) arr_11 [i_1] [i_2 - 2] [i_3] [i_6]);
                        }
                        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
                        {
                            arr_24 [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) % (var_13)))) ? (arr_0 [i_1 + 2]) : (((/* implicit */int) ((_Bool) var_13)))));
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (+(((/* implicit */int) (_Bool)1)))))));
                            var_27 = ((/* implicit */int) (signed char)(-127 - 1));
                        }
                        var_28 = ((/* implicit */signed char) arr_21 [i_0] [i_1 + 1] [(unsigned char)0] [i_1] [i_1] [(unsigned char)0]);
                    }
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned int) -5489661427248156818LL);
                        var_30 = ((/* implicit */long long int) (((~(arr_1 [i_8]))) >> (((/* implicit */int) (_Bool)1))));
                        arr_29 [i_8] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-41)) && (((/* implicit */_Bool) arr_19 [i_1] [i_0] [i_1 + 2] [i_2] [i_1] [i_8])))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            var_31 = ((/* implicit */_Bool) ((long long int) var_12));
                            arr_32 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_10)))) ? (511ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6954)))));
                            arr_33 [i_0] [i_1] [i_2] [i_8] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [8ULL] [i_1 + 1])) || (((/* implicit */_Bool) -1346439703))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 24; i_10 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned char) var_10);
                            arr_37 [i_0] [i_1] [i_2] [i_8] [(unsigned char)13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (_Bool)0))) && (((/* implicit */_Bool) (unsigned char)170))));
                        }
                        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                        {
                            arr_42 [i_0] [i_1] [i_2] [i_0] [i_11] = ((/* implicit */unsigned char) ((var_14) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)4543))))))));
                            var_33 = ((/* implicit */long long int) ((arr_35 [i_0] [i_1] [(signed char)7] [i_8] [i_11]) >= (((/* implicit */long long int) var_16))));
                            var_34 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)35))) : (arr_22 [i_0] [i_0] [i_2] [i_0] [i_11] [i_11] [i_2 - 2])))) ? (((((/* implicit */_Bool) (signed char)35)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) ((1745876182) == (((/* implicit */int) (_Bool)1))))))));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_35 = ((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))) * (var_14)))));
                            arr_45 [i_2] [i_1] [i_2] [i_8] [i_1] [2] = (signed char)47;
                            var_36 = ((/* implicit */long long int) (+(arr_11 [i_1 + 1] [i_2] [i_2 + 1] [i_2 + 1])));
                        }
                    }
                    arr_46 [i_0] [21LL] [i_1 + 1] [i_1] = ((/* implicit */_Bool) (unsigned char)86);
                    arr_47 [i_0] [i_2] [i_1] [22ULL] &= ((/* implicit */unsigned int) ((((arr_38 [i_2] [(unsigned char)8] [i_2 + 1]) || (arr_38 [i_1 + 1] [i_2] [i_2 + 1]))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_38 [i_2 - 1] [i_2] [i_2 + 1])))))));
                }
            } 
        } 
    } 
}
