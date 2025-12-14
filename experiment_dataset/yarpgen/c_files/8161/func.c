/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8161
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
    for (short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */short) (((((~(15095220719542005788ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? (arr_0 [9ULL] [i_1 + 1]) : (((/* implicit */unsigned long long int) 2147483647))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) (-((+(((((/* implicit */int) var_3)) - (2147483647)))))));
                            var_19 = ((/* implicit */_Bool) ((arr_9 [i_0] [i_1] [i_0] [i_3]) & (((/* implicit */unsigned long long int) -5028499556937495912LL))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) arr_8 [(unsigned short)7] [(unsigned short)7] [i_1 - 1] [i_0 + 1]);
            }
        } 
    } 
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((((/* implicit */long long int) 550818954U)) - (9223372036854775784LL))) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((/* implicit */int) ((20293743235095131ULL) == (10239348541326028945ULL)))))));
    /* LoopSeq 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_2)), (var_12)));
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            var_23 = ((/* implicit */long long int) max((var_23), (var_15)));
            var_24 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5]))) * (((long long int) arr_16 [i_4]))));
        }
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((signed char) arr_14 [(unsigned short)9] [(unsigned short)9])))));
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4] [i_4])) ? (((/* implicit */int) arr_14 [(unsigned short)10] [i_4])) : (((/* implicit */int) arr_14 [i_4] [i_4]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */int) ((unsigned char) 5303424639735140036LL))) : ((-(((/* implicit */int) var_7)))))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((-6633165699425976496LL) | (8033861501046201376LL)))) & (min((arr_20 [i_6]), (arr_20 [i_6])))));
        var_28 |= ((/* implicit */signed char) (~(((/* implicit */int) arr_16 [i_6]))));
    }
}
