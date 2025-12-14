/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76185
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        arr_3 [i_0] = arr_0 [i_0] [i_0];
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                arr_10 [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((int) 7992774397629355332ULL));
                arr_11 [i_1] [i_1] = ((/* implicit */long long int) var_11);
                arr_12 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) > (((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_15)))))));
            }
            for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) != (arr_14 [i_1] [(short)17])))))));
                arr_17 [(_Bool)1] [i_1] [i_3] [(_Bool)1] = ((/* implicit */_Bool) arr_16 [i_1]);
            }
            for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                var_17 = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned char)154));
                arr_20 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_0 [i_0] [(_Bool)1])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_0])) : (var_12))) : (((int) (unsigned short)38757))));
                var_18 += ((/* implicit */unsigned long long int) ((-4105616434520612692LL) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_10))))));
                var_19 ^= ((/* implicit */unsigned long long int) ((((long long int) var_4)) > (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_15 [i_1] [i_1] [(unsigned short)6]))))));
                /* LoopSeq 2 */
                for (unsigned int i_5 = 3; i_5 < 17; i_5 += 1) 
                {
                    arr_25 [13U] [i_1] [i_1] [i_0] = ((/* implicit */short) ((unsigned short) ((unsigned short) (unsigned short)25281)));
                    var_20 = ((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */unsigned int) ((int) var_8))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (arr_5 [11ULL] [i_1] [i_5]) : (var_5))));
                }
                for (short i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)62)) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_1 [i_4])) : (arr_27 [i_0] [i_0] [i_4] [i_0] [i_4]))))));
                    var_22 = ((/* implicit */short) arr_8 [i_0] [i_1] [i_1] [i_0]);
                }
            }
            arr_28 [i_1] = ((/* implicit */unsigned short) var_14);
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_7 = 3; i_7 < 16; i_7 += 3) 
        {
            arr_31 [i_7] = ((/* implicit */int) var_5);
            var_23 = var_13;
        }
    }
    var_24 = ((/* implicit */short) ((long long int) ((((/* implicit */int) ((_Bool) var_1))) & (((int) var_7)))));
    var_25 = ((/* implicit */short) var_11);
}
