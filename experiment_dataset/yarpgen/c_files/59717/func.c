/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59717
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
    var_11 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)3072))))) ? (((/* implicit */int) (short)3077)) : (((/* implicit */int) (signed char)118)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_2]);
                    arr_10 [i_0] [i_1 - 1] [i_2] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_3)))) : (arr_8 [i_1 + 1] [i_1 + 1]))), (((/* implicit */long long int) (_Bool)0))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        arr_13 [i_3 - 2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((short) ((((/* implicit */unsigned long long int) arr_8 [i_3 - 2] [i_1 + 1])) < (arr_4 [i_0] [i_1 - 1] [i_0]))));
                        /* LoopSeq 2 */
                        for (int i_4 = 1; i_4 < 13; i_4 += 4) 
                        {
                            var_12 -= ((/* implicit */unsigned long long int) var_2);
                            var_13 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3072)) ? (((/* implicit */int) (short)3102)) : (((/* implicit */int) (short)-3073))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)3055)))), ((-(((/* implicit */int) (short)22499))))));
                            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) var_6)))))), (min((max((((/* implicit */unsigned long long int) (short)-22499)), (10708323525988988016ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1514782368)) ? (((/* implicit */int) (signed char)58)) : (((/* implicit */int) (signed char)-4))))))))))));
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-22499)) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-3055)) / (((/* implicit */int) (signed char)11))))), (min((((/* implicit */unsigned long long int) var_5)), (arr_1 [i_0] [i_1 - 1]))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 72057594037927920ULL)) ? (262136) : (((/* implicit */int) (short)-3055)))))))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((13299512562149176136ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) - (min((var_0), (var_3))))) : (((/* implicit */unsigned int) var_6))));
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)5))) ^ (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_0)))))) ^ (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)3055)) ? (((/* implicit */int) var_4)) : (var_10)))), ((~(var_8))))))))));
                        }
                        arr_19 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) (+(arr_3 [i_0] [i_1 - 1] [i_0])));
                        arr_20 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16256))) : (arr_1 [i_0] [i_0])))));
                    }
                    var_17 = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)228)), (var_9)));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) var_8);
    var_19 = ((((/* implicit */_Bool) (~(((int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) > (var_0)))))))) : ((-((+(15787241077446337150ULL))))));
}
