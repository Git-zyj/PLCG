/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94833
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
    var_17 = ((/* implicit */short) (-(var_1)));
    var_18 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */int) (short)-31887)) : ((-2147483647 - 1))));
                        arr_13 [i_0] [18] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)27048)) >> (((((/* implicit */int) (short)31875)) - (31850))))) & (1697576543)));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-1651055744)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1697576543)) ? (((/* implicit */unsigned long long int) 2147483634)) : (2241087949064747761ULL)))))))));
                            arr_16 [i_4] [5LL] [i_4] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-31867)) || (((/* implicit */_Bool) (short)31887))))) > ((-2147483647 - 1))));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((1372638761) < (((/* implicit */int) (signed char)52)))))));
                            var_21 = ((/* implicit */short) ((((/* implicit */int) (short)31884)) & (2147483647)));
                            var_22 *= ((/* implicit */short) ((0U) == (((/* implicit */unsigned int) ((/* implicit */int) ((1219678846) >= (-1066615682)))))));
                        }
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        var_23 = ((/* implicit */signed char) ((((/* implicit */int) (short)-28223)) >= (((((((/* implicit */int) (_Bool)1)) >> (((-1697576551) + (1697576579))))) ^ (1697576545)))));
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1697576561)) ? (((/* implicit */int) (unsigned char)2)) : (-1066615676)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8860118542706654147ULL)) ? ((-2147483647 - 1)) : (1219678862)))))))));
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)76)))) | (((((/* implicit */int) (short)-31894)) | ((-2147483647 - 1)))))))));
                    }
                    arr_19 [i_0] [i_0] [7U] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 12204473033539749968ULL)) ? (8860118542706654147ULL) : (((/* implicit */unsigned long long int) 2142038167)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)4)) || (((/* implicit */_Bool) -1219678841))))))));
                    arr_20 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)20699)) << ((((-(((((/* implicit */int) (_Bool)1)) - (1219678859))))) - (1219678844)))));
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), ((~(((max((((/* implicit */unsigned long long int) 3U)), (2131101691977347055ULL))) >> (((((1ULL) << (((-1219678863) + (1219678911))))) - (281474976710604ULL)))))))));
                }
            } 
        } 
    } 
}
