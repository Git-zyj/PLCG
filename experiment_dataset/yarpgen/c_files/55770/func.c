/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55770
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
    var_14 = ((/* implicit */short) ((min((var_12), (((/* implicit */long long int) min(((unsigned char)71), ((unsigned char)181)))))) & (((/* implicit */long long int) ((/* implicit */int) ((_Bool) max(((-2147483647 - 1)), (((/* implicit */int) var_13)))))))));
    var_15 = ((/* implicit */long long int) var_0);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) min(((unsigned char)0), (((unsigned char) 18446744073709551613ULL))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) min((((min((-1LL), (((/* implicit */long long int) arr_1 [i_0])))) + (max((arr_0 [i_0]), (((/* implicit */long long int) var_0)))))), (min((max((((/* implicit */long long int) var_13)), (3759811693533855727LL))), (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)65533)), (var_3))))))));
        var_16 |= ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (_Bool)1))) >> (((/* implicit */int) ((_Bool) (unsigned short)17989)))));
        arr_4 [(unsigned short)4] [(unsigned short)4] = ((/* implicit */unsigned int) ((unsigned char) -7303503984442907937LL));
    }
}
