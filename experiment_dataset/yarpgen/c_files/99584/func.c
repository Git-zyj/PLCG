/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99584
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
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 22; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_18 -= var_17;
                                var_19 = ((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_1] [i_0]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (unsigned char)103)))) && (((/* implicit */_Bool) 1402052946U)))) ? (((((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_5 - 1]))) & (2534547345372715292ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [(unsigned short)19] [i_5] [(unsigned char)6] [i_6])))));
                            var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) 3041573621482299011ULL)) && (((/* implicit */_Bool) arr_3 [i_0]))))), ((unsigned char)219)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), ((short)31744)));
}
