/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91132
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
    var_12 = ((/* implicit */signed char) var_3);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (unsigned char)199))));
                    var_14 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_3 [i_2] [i_2 + 2] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)0))))) && (((((/* implicit */_Bool) 864122225)) || (((/* implicit */_Bool) (signed char)7))))));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (_Bool)1))));
    }
    for (short i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) arr_6 [i_3]);
        var_17 = ((/* implicit */short) max((((((int) var_0)) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)16)), (arr_6 [i_3]))))));
    }
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) -419982198173482607LL))));
    var_19 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 1 */
    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        var_20 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) arr_11 [i_4])))))), (((((/* implicit */_Bool) ((long long int) arr_8 [i_4]))) ? ((~(arr_8 [i_4]))) : (arr_8 [i_4])))));
        arr_12 [i_4] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4] [i_4]))) == (arr_8 [(short)2]))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) max((var_21), ((-(arr_8 [i_4])))));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_5 + 2] [i_5])) ? (((/* implicit */int) arr_10 [i_5 + 3] [i_5 + 4])) : (((/* implicit */int) arr_10 [i_5] [i_5 + 3]))));
        }
        for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            arr_17 [i_4] [9LL] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_11 [i_6]), (arr_15 [i_6])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(_Bool)1])) ? (var_10) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) ((unsigned char) -583230841))))) : (((/* implicit */int) ((((/* implicit */_Bool) (~(1531597991U)))) || (((/* implicit */_Bool) ((short) (unsigned short)38708))))))));
            arr_18 [i_4] [(unsigned short)6] [(unsigned short)6] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_6]))))), (arr_10 [i_4] [i_6])));
            var_23 = ((/* implicit */unsigned short) var_4);
        }
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            arr_21 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_4])) && (((/* implicit */_Bool) arr_20 [i_7] [i_7] [i_7 + 1]))));
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((var_5) % (((/* implicit */unsigned long long int) arr_13 [i_4] [i_7]))))) || (((/* implicit */_Bool) ((4294967290U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_7])))))))))));
        }
    }
}
