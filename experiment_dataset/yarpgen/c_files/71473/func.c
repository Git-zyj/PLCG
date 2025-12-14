/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71473
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
    var_13 ^= ((/* implicit */unsigned char) var_8);
    var_14 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) ((((arr_0 [i_0] [i_0]) + (9223372036854775807LL))) << (((((min((arr_3 [i_0]), (var_7))) + (6035101754590808739LL))) - (6LL)))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((628951766495349681LL), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (arr_5 [(signed char)5] [i_1] [i_2 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (arr_3 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -8847140042654512792LL))))))))));
                    arr_11 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned int) (short)-12168))), (max((((/* implicit */long long int) (short)-12175)), (arr_9 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1])))));
                    var_16 = var_10;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) (~(6436699802088188432LL)));
                                arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((short) arr_16 [i_4] [i_0] [i_0] [i_2 - 1])))));
                                arr_19 [i_0] [i_1] [i_2 - 1] [i_3] [(_Bool)1] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) min(((short)-12168), ((short)12168)))) ? (((((/* implicit */_Bool) (short)18385)) ? (((/* implicit */int) (short)-12169)) : (((/* implicit */int) (short)12171)))) : (((/* implicit */int) max(((short)12168), ((short)12154))))))));
                            }
                        } 
                    } 
                    var_18 += ((/* implicit */short) ((var_7) < (max((((((/* implicit */_Bool) 11878330715369580707ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-12185))) : (6923602534486722355LL))), (((/* implicit */long long int) (~((-2147483647 - 1)))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            for (short i_6 = 1; i_6 < 21; i_6 += 3) 
            {
                for (signed char i_7 = 1; i_7 < 22; i_7 += 3) 
                {
                    {
                        var_19 = ((/* implicit */signed char) (unsigned char)151);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_8 = 2; i_8 < 19; i_8 += 3) 
                        {
                            var_20 += ((/* implicit */unsigned char) ((5894220398568269412ULL) + (((/* implicit */unsigned long long int) (+(-1LL))))));
                            var_21 += ((/* implicit */long long int) (short)-13516);
                        }
                        var_22 ^= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_5] [i_5] [i_6] [i_7]))) + (arr_26 [i_6])));
                    }
                } 
            } 
        } 
    }
}
