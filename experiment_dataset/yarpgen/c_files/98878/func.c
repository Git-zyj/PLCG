/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98878
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
    var_16 -= ((/* implicit */short) ((13ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) 34359705600ULL)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_17 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (unsigned char)215))) + (((/* implicit */int) (!(var_11))))))) ? (((/* implicit */int) ((unsigned short) 10415236070356014278ULL))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_7 [i_0])), (var_4))))));
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                            {
                                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0 + 2] [i_2] [i_4])))))));
                                var_19 *= ((/* implicit */short) var_7);
                            }
                            var_20 = ((/* implicit */_Bool) min(((+(((34359705580ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12))))))), (34359705590ULL)));
                        }
                    } 
                } 
                var_21 += ((((34359705563ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 3]))))) ? (((/* implicit */int) ((signed char) (unsigned short)36356))) : (((((/* implicit */int) arr_0 [i_1])) ^ (((/* implicit */int) arr_0 [i_1])))));
                arr_18 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_13 [i_0] [(_Bool)1])))) | (((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_0 + 3] [8U] [i_0 - 2] [i_1]))))) > ((-(1497620731U))))))));
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        {
                            var_22 ^= ((/* implicit */signed char) (((!(((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) arr_15 [i_6] [i_6] [i_0] [i_5] [i_1] [i_0])))))) ? ((+(((/* implicit */int) arr_9 [i_0] [(short)2] [i_0 + 2] [i_0])))) : ((+(((((/* implicit */int) arr_6 [i_0] [i_5] [i_0])) % (((/* implicit */int) arr_12 [i_6] [i_5] [i_5] [i_1] [i_0]))))))));
                            var_23 = ((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_1] [i_1] [i_6]);
                        }
                    } 
                } 
                arr_24 [i_0] [i_1] = ((/* implicit */unsigned char) (((~(((/* implicit */int) max((var_15), (var_7)))))) > (((/* implicit */int) ((unsigned char) (unsigned short)65531)))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) var_13);
    var_25 -= ((/* implicit */signed char) var_3);
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) 
    {
        for (unsigned int i_8 = 2; i_8 < 23; i_8 += 1) 
        {
            {
                var_26 &= ((/* implicit */signed char) (_Bool)0);
                var_27 *= arr_27 [(_Bool)1];
                var_28 &= ((/* implicit */_Bool) (+((~(((/* implicit */int) ((unsigned char) arr_28 [(unsigned char)14])))))));
            }
        } 
    } 
}
