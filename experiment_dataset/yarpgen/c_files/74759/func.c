/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74759
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
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-43)) | (((/* implicit */int) arr_2 [i_0] [i_1])))) | (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0])), ((unsigned short)38361))))))) && (((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned short)38361)))))))));
                var_11 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)22))))), (((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_8))))) | (((((/* implicit */_Bool) (unsigned short)27174)) ? (((/* implicit */int) (unsigned short)27170)) : (((/* implicit */int) arr_0 [i_0] [i_1]))))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        var_12 *= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1])) && (((/* implicit */_Bool) (unsigned short)27183)))));
                        var_13 = ((/* implicit */long long int) 1825476369);
                        var_14 ^= (~(((((/* implicit */int) var_6)) % (((/* implicit */int) arr_6 [i_0])))));
                    }
                    for (int i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
                    {
                        var_15 *= ((/* implicit */unsigned long long int) (+(min((((/* implicit */int) max(((unsigned short)255), (((/* implicit */unsigned short) arr_6 [(signed char)10]))))), (-1788326535)))));
                        var_16 += ((/* implicit */short) ((((_Bool) ((((/* implicit */int) (unsigned short)27175)) % (((/* implicit */int) arr_5 [i_1] [i_1] [i_4]))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_1] [i_1])), (arr_8 [i_1]))))));
                        arr_10 [(signed char)17] [(signed char)17] [i_1] [i_2] [i_4] = ((/* implicit */long long int) (unsigned short)255);
                    }
                    for (int i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
                    {
                        var_17 = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_5]))))));
                        arr_15 [i_0] [i_1] [i_2] [i_2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)27149)) ? (((/* implicit */unsigned long long int) 1825476369)) : (arr_7 [i_0] [i_1] [i_2] [(signed char)9]))), (((/* implicit */unsigned long long int) (unsigned short)49537))))) && (((/* implicit */_Bool) (-(var_0))))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) 1825476352)) && ((!(((/* implicit */_Bool) arr_8 [i_0]))))))) | ((~(((/* implicit */int) ((short) 3496928607U)))))));
                        /* LoopSeq 1 */
                        for (signed char i_6 = 3; i_6 < 16; i_6 += 4) 
                        {
                            arr_18 [i_0] [i_1] [i_2] [i_2] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-4)) && (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_2] [i_0] [i_2]))))), (arr_14 [i_0] [i_1] [i_1] [i_5] [i_6 - 3] [i_0]))))));
                            var_19 |= ((/* implicit */unsigned int) ((-536870912) | (((/* implicit */int) max(((!(((/* implicit */_Bool) (unsigned short)59036)))), ((!(((/* implicit */_Bool) arr_1 [i_0])))))))));
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) max((((/* implicit */unsigned short) (_Bool)1)), (min((arr_5 [i_5] [i_6 - 1] [i_5]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) -1825476341))))))))))));
                        }
                    }
                    for (unsigned short i_7 = 4; i_7 < 16; i_7 += 1) 
                    {
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((unsigned int) min((((/* implicit */unsigned int) arr_19 [i_7] [i_7 - 1] [i_7 - 1] [i_7 + 1])), (arr_22 [i_7] [i_7 - 4] [i_7 + 1] [i_7 - 4] [i_7 - 4])))))));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) max(((((-(((/* implicit */int) var_9)))) | (min((((/* implicit */int) (signed char)93)), (726862184))))), (((1825476345) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65278))))))))))));
                        var_23 = max(((-(arr_14 [3] [i_7] [i_2] [i_2] [i_1] [i_0]))), (((/* implicit */long long int) arr_22 [i_0] [1LL] [i_0] [i_0] [i_2])));
                        arr_23 [i_2] [i_2] = ((/* implicit */short) (((+(((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)27170)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_1))))))))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        var_24 = ((/* implicit */signed char) (((~(((/* implicit */int) arr_5 [i_2] [i_0] [i_2])))) % ((-(((/* implicit */int) (unsigned short)9919))))));
                        var_25 = (-(((/* implicit */int) (_Bool)0)));
                        arr_28 [i_2] [i_1] = ((/* implicit */signed char) max((((/* implicit */int) (_Bool)1)), (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)52406)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) 10595939182656319380ULL)) && (((/* implicit */_Bool) 610667350)))))))));
                        var_26 = ((/* implicit */signed char) max(((((_Bool)1) ? (((((/* implicit */_Bool) (short)31)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (4865691170352331512ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)22782)))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_2] [(unsigned short)17])))))));
                    }
                    var_27 += ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1]))))) && (((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) arr_1 [i_0])))))))));
                }
                for (unsigned short i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        arr_35 [i_10] [i_9] [i_0] [i_9] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (9561969849641526123ULL)))))));
                        var_28 *= ((/* implicit */unsigned short) (_Bool)1);
                        var_29 *= ((/* implicit */short) min(((+(arr_11 [i_10 - 1] [i_10 - 1] [(signed char)1] [i_10 - 1]))), (((/* implicit */int) arr_3 [i_10] [i_9] [i_1]))));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_1] [i_1])) % (((/* implicit */int) arr_27 [i_0] [i_0] [i_9] [i_10] [i_9] [i_10])))) | ((-(((/* implicit */int) var_7))))))) ? (arr_13 [i_1] [i_1] [i_10]) : (((/* implicit */unsigned int) (+(((/* implicit */int) max((var_2), (var_1)))))))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 19; i_11 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-113)) && (((/* implicit */_Bool) max(((unsigned short)41094), (((/* implicit */unsigned short) (short)1127)))))));
                        var_32 = ((/* implicit */signed char) (unsigned short)65535);
                    }
                    arr_40 [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)188))) >= (((unsigned long long int) max((((/* implicit */unsigned char) (signed char)116)), (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                    var_33 |= ((/* implicit */signed char) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)0)), (arr_20 [i_1])))) ? (((((/* implicit */_Bool) (signed char)-16)) ? (arr_13 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [(unsigned short)1] [i_1] [i_1] [i_1] [i_1] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_9] [i_9] [i_9] [(unsigned char)0]))))))))));
                }
                var_34 += ((/* implicit */_Bool) var_1);
                var_35 = ((/* implicit */short) ((((/* implicit */unsigned int) ((arr_29 [i_0] [i_0] [i_0] [i_1]) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) (short)17836)) : (((/* implicit */int) arr_27 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0]))))))) >= (((arr_22 [i_1] [4] [12] [i_0] [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_2 [4] [i_0])) >= (-1680338753)))))))));
            }
        } 
    } 
    var_36 = ((/* implicit */signed char) var_0);
    var_37 -= ((/* implicit */unsigned short) (~(((int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (signed char)-5)))))));
}
