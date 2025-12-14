/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6209
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
    var_12 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)29101))), (var_7))) & ((-(var_7)))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_14 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(7178988477724557683ULL)))) ? (arr_0 [2] [i_0]) : (arr_0 [(unsigned short)18] [(unsigned short)18])));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)7200), ((unsigned short)58355)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)58331)), (var_6)))) : (arr_0 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_2), ((unsigned short)58344))))) : (((var_10) + (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
        arr_2 [(unsigned short)17] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_16 = ((((/* implicit */int) (unsigned short)5763)) << (((1847124507U) - (1847124496U))));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)58319)) != ((+(((/* implicit */int) (unsigned short)65515))))));
        var_18 = -4407644904058831302LL;
    }
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) max((144115188075855808LL), (((/* implicit */long long int) (unsigned short)25676)))))) ? (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) var_6)), (144115188075855808LL))), (((/* implicit */long long int) arr_7 [7ULL]))))) : (((((/* implicit */_Bool) 144115188075855808LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7200))) : (557087661195484563ULL)))));
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)39853))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [22ULL] [22ULL]))) : (min((((/* implicit */unsigned long long int) arr_5 [2ULL])), (arr_0 [18ULL] [i_2])))));
    }
    var_21 = ((/* implicit */long long int) (~(((/* implicit */int) var_1))));
}
