/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83696
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
    for (unsigned long long int i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) 4026531840U)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) || (((/* implicit */_Bool) arr_2 [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            var_15 -= min(((+(3764050491U))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((arr_5 [i_0] [i_1] [i_1]) > (var_4)))), (arr_0 [i_0])))));
            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (-2147483647 - 1))) % (((((/* implicit */_Bool) 10164984967361645548ULL)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))))) ? (((((((/* implicit */_Bool) arr_5 [i_1] [(unsigned char)10] [i_1])) || (((/* implicit */_Bool) 2611048722U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2611048703U)) ? (((/* implicit */unsigned int) arr_2 [i_1])) : (arr_5 [i_0] [i_1 + 1] [i_0])))) : (var_2))) : (((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_12) : (((/* implicit */unsigned long long int) 4234929440U)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5)))))));
        }
        arr_6 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(640202767U)))) ? (arr_4 [i_0 - 3] [i_0 + 1] [i_0 + 1]) : (max((342831862U), (((/* implicit */unsigned int) -562781907))))))) ? (((((/* implicit */_Bool) 1719967780U)) ? (max((3523047060U), (arr_5 [i_0 - 3] [i_0] [19]))) : (min((2611048722U), (((/* implicit */unsigned int) var_6)))))) : (((/* implicit */unsigned int) -1219062722)));
        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) -1581727205)), (((((/* implicit */_Bool) 4127462727U)) ? (((/* implicit */unsigned int) -2105906077)) : (3439493779U))))))));
    }
    for (unsigned char i_2 = 2; i_2 < 22; i_2 += 3) 
    {
        var_18 *= 640202773U;
        var_19 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) max((arr_9 [12U] [i_2 - 2]), (((/* implicit */int) ((939524096) < (-1219062702))))))) == (min((((var_1) << (((var_1) - (1657970270U))))), (((8U) << (((4935602283557811382ULL) - (4935602283557811358ULL)))))))));
    }
    var_20 = ((/* implicit */int) var_12);
}
