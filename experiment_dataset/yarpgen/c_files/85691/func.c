/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85691
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
    var_11 = ((/* implicit */unsigned long long int) var_6);
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) (unsigned char)161))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (unsigned char)171);
        var_13 = min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))), (((-624975688) / (((/* implicit */int) arr_1 [i_0])))));
        var_14 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6493)) ? (459009082705674014ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)95)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((unsigned long long int) (unsigned char)82)) : (min((var_4), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))))))));
    }
    for (int i_1 = 1; i_1 < 22; i_1 += 3) 
    {
        var_15 = ((/* implicit */int) (short)6493);
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (+((-2147483647 - 1))));
        var_16 = ((/* implicit */unsigned long long int) min((((short) ((int) 1939146427))), (max(((short)-32474), (((/* implicit */short) (unsigned char)19))))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_2), (min((11642524759052850593ULL), (((/* implicit */unsigned long long int) (unsigned char)214))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) (unsigned char)210))))) ? (11894005280799586935ULL) : (((/* implicit */unsigned long long int) 151110436)))) : (var_2)));
    }
    var_18 -= ((/* implicit */short) var_9);
    var_19 = ((((/* implicit */int) var_0)) | (((/* implicit */int) ((-114351079) == (((/* implicit */int) (short)6248))))));
}
