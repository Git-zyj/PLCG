/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72397
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
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) -2093334524)) && (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */long long int) 65535U))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_14 [i_3] [i_2] [i_4] [i_3] [i_4] [i_0] = ((unsigned int) var_3);
                                var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4294901760U)) | (2249880274655180751ULL)))) ? (((((/* implicit */_Bool) 16196863799054370864ULL)) ? ((-(var_2))) : (((/* implicit */long long int) arr_0 [i_1 + 1])))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_13 [i_4 - 1] [i_1 + 3])))))));
                                arr_15 [i_0] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) 4191037112U))) && (((/* implicit */_Bool) (-(max((1621332780), (var_1))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) ((unsigned long long int) var_14));
                    arr_16 [i_0] [i_1] [i_1 - 2] [i_2] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1 + 2] [i_2])) ? (2093334524) : (2147483647)))));
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1 + 2] [i_1 + 2])) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0])) : ((-(arr_2 [i_0] [i_2] [i_5]))))), (1270507778)));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            var_19 ^= var_3;
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1 + 2] [i_1 + 2])) ? (((((/* implicit */_Bool) (unsigned char)124)) ? (arr_10 [i_0 - 1] [i_1 + 1] [i_2] [i_5] [i_6]) : (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_5])))))) ? (((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned long long int) 103930183U)), (3ULL))))) : (((unsigned long long int) ((((/* implicit */unsigned long long int) 0)) == (var_10)))))))));
                        }
                    }
                    for (long long int i_7 = 0; i_7 < 17; i_7 += 3) /* same iter space */
                    {
                        arr_24 [3ULL] [i_1] [i_2] [i_7] |= ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) 3267564795U)) != (0ULL)))), (((arr_7 [i_0 - 1] [i_2] [i_2]) & (arr_7 [15] [15] [i_7])))));
                        var_21 -= ((/* implicit */int) ((((arr_9 [i_0] [i_1] [i_2] [i_2]) <= (((/* implicit */int) ((((/* implicit */int) arr_1 [i_2] [i_7])) <= (-65536)))))) || (((/* implicit */_Bool) (-(458476480U))))));
                    }
                }
            } 
        } 
    } 
}
