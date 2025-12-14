/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65309
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [8] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((unsigned char) ((short) -267764253)))), ((-(-884099849218804000LL)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        var_10 = ((/* implicit */unsigned int) 0ULL);
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) -884099849218803990LL)))))));
                            arr_12 [i_0] [i_3] [(short)3] [i_1] [i_0] = ((/* implicit */int) 13739713887462566154ULL);
                        }
                    }
                }
            } 
        } 
    } 
    var_12 -= ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned int) 5238666874369539265ULL))) ? (13739713887462566143ULL) : (((((/* implicit */_Bool) (signed char)123)) ? (0ULL) : (var_0))))) > (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)65535)), (8997226294130204854ULL)))) ? (((((/* implicit */_Bool) var_6)) ? (9449517779579346791ULL) : (13739713887462566178ULL))) : (min((((/* implicit */unsigned long long int) var_1)), (9449517779579346758ULL)))))));
}
