/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59878
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
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) 2088513356383842301ULL))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = var_5;
        var_21 = ((/* implicit */_Bool) (~(arr_0 [i_0] [i_0])));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 2088513356383842291ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 713093874)))))) : ((+(10169545059704111346ULL)))));
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_22 = ((/* implicit */long long int) (((~(((arr_4 [i_1] [i_1]) & (arr_4 [i_1] [i_1]))))) | (max((((/* implicit */int) var_3)), (((((/* implicit */int) arr_6 [i_1])) & (((/* implicit */int) (unsigned char)47))))))));
        arr_7 [i_1] |= ((/* implicit */short) arr_4 [i_1] [i_1]);
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 13145710438676285085ULL)) || (((/* implicit */_Bool) 7618081211132206792LL)))))));
        var_24 -= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])), (13440514692716083669ULL)))))) ? (((((/* implicit */_Bool) ((short) 2088513356383842294ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((713093874) <= (((/* implicit */int) (unsigned char)132)))))) : (min((((/* implicit */unsigned long long int) arr_5 [i_1])), (14432208303524723037ULL))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_6 [i_1])), (arr_4 [i_1] [i_1]))))));
    }
}
