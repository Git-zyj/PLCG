/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87319
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_17 = min(((~(-268435456))), (((((/* implicit */_Bool) min((((/* implicit */long long int) 268435459)), (1302947694671548827LL)))) ? (arr_3 [i_0]) : (268435456))));
        var_18 &= ((/* implicit */long long int) min((18446744073709551596ULL), (((/* implicit */unsigned long long int) max((((/* implicit */short) arr_0 [i_0] [i_0])), ((short)-1))))));
        var_19 = ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_20 += ((/* implicit */short) (((~(1885540976))) != (((/* implicit */int) max((arr_0 [(short)4] [(short)4]), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) -4967887139120662846LL))))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_21 = (+(-1885540981));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */int) (signed char)98);
            var_23 = ((arr_4 [i_2]) / (((/* implicit */int) arr_5 [i_1])));
            arr_8 [i_1] = ((/* implicit */unsigned short) ((var_11) << (0ULL)));
            var_24 = ((/* implicit */unsigned long long int) 20);
        }
        for (int i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
        {
            var_25 &= ((/* implicit */unsigned long long int) ((35ULL) != (18446744073709551603ULL)));
            var_26 = ((/* implicit */int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (18446744073709551607ULL)))));
            var_27 = ((/* implicit */int) (+(((((-1813825022845360915LL) + (9223372036854775807LL))) << (((((arr_6 [i_3]) + (2065045476))) - (54)))))));
        }
        var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))));
        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-32760)) ? (arr_7 [i_1] [i_1] [i_1]) : (arr_7 [i_1] [(short)11] [i_1])));
    }
    var_30 = ((/* implicit */int) max((var_30), (var_4)));
}
