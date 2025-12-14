/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6405
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
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (var_3)));
    var_19 = ((/* implicit */unsigned short) (((_Bool)1) ? (-1802548687) : (((/* implicit */int) (unsigned char)28))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (signed char)-42))));
                        arr_12 [i_0] [i_0] [1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(unsigned short)6] [(signed char)10] [i_1] [i_0]))) ^ ((-(arr_8 [i_0] [i_0] [i_2] [i_3])))));
                    }
                    var_21 -= ((/* implicit */int) (+((~(arr_8 [i_0] [(_Bool)1] [i_2] [6])))));
                    var_22 = (unsigned char)213;
                    var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_0 - 1]))));
                }
            } 
        } 
        arr_13 [i_0] [(unsigned char)6] = ((/* implicit */unsigned char) ((1) << (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)51300)) || (((/* implicit */_Bool) 1)))))));
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0]))) ? (((((/* implicit */_Bool) arr_16 [(_Bool)1] [(unsigned char)13])) ? (((/* implicit */int) arr_15 [i_4])) : (var_17))) : (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_5 [i_4])))))))));
            var_25 = ((/* implicit */_Bool) var_12);
        }
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */int) ((((/* implicit */int) max(((_Bool)1), (((_Bool) var_7))))) >= (max((((/* implicit */int) var_16)), ((-(((/* implicit */int) arr_17 [i_5] [i_5]))))))));
        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_18 [(_Bool)1] [(_Bool)1])) ? (-15) : (((/* implicit */int) arr_17 [i_5] [i_5])))) - (((/* implicit */int) arr_17 [i_5] [i_5]))))) ? (((/* implicit */int) (!(arr_17 [i_5] [9])))) : (((/* implicit */int) ((((((/* implicit */_Bool) -1889297350)) ? (10335279916908061934ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30316))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24479)))))))))));
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_8), (((/* implicit */int) (signed char)1))))) || (((((/* implicit */unsigned int) min((((/* implicit */int) var_7)), (arr_18 [(unsigned short)3] [(unsigned char)12])))) >= (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) + (var_9)))))));
        arr_19 [5U] = ((/* implicit */_Bool) ((6435407001736675882ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [9ULL] [i_5])))));
        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (((((_Bool)0) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7)))) >= (arr_18 [i_5] [i_5])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (_Bool)0))))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] [(unsigned short)12] &= 0ULL;
        var_30 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((0ULL) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_6] [i_6])) ? (arr_18 [i_6] [3ULL]) : (arr_18 [i_6] [i_6])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [(_Bool)1])))));
        var_31 = ((/* implicit */unsigned char) arr_20 [i_6]);
        arr_23 [i_6] = ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) arr_21 [i_6])), (9103492684732344066ULL)))));
    }
}
