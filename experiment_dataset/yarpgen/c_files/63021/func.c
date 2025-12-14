/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63021
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = arr_2 [i_0];
        arr_4 [i_0] = min((((((/* implicit */_Bool) ((unsigned long long int) 18446744073709551615ULL))) ? (max((var_7), (15125217175932920414ULL))) : (arr_0 [i_0] [i_0]))), ((+(max((15541216285295994959ULL), (15727561634147206ULL))))));
        arr_5 [i_0] [i_0] = ((unsigned long long int) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])));
        arr_6 [i_0] [i_0] = (((~(((((/* implicit */_Bool) 4192256ULL)) ? (18446744073709551615ULL) : (arr_0 [i_0] [20ULL]))))) | (((unsigned long long int) 9816336534196089674ULL)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_12 = (~(((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (arr_1 [i_1] [i_1]) : (arr_1 [i_1] [i_1]))));
        arr_10 [i_1] = ((((/* implicit */_Bool) ((unsigned long long int) ((18446744073709551615ULL) / (6055057583300539475ULL))))) ? (((((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (9007199254740991ULL) : (arr_0 [i_1] [i_1]))) << ((((~(arr_8 [i_1]))) - (3447544236206867429ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((var_5) <= (arr_1 [i_1] [i_1]))))))));
    }
    var_13 = (((+(var_6))) % ((((-(12075899934856977381ULL))) * (((((/* implicit */_Bool) 6795959564719272457ULL)) ? (var_0) : (var_4))))));
    var_14 = 8417907029274126871ULL;
}
