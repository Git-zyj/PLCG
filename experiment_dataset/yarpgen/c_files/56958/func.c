/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56958
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483644)) ? (((/* implicit */int) (unsigned short)63488)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) max(((unsigned short)43613), (var_11)))) : (((/* implicit */int) min(((unsigned short)65513), ((unsigned short)11249))))))) ? (-646184259) : (((/* implicit */int) var_8))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [(unsigned short)6] = ((/* implicit */unsigned short) (~(((int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_10) : (arr_3 [(short)11]))))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */short) arr_1 [i_0])), ((short)-4433))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)13530))))) == ((+(1198875812U)))))) : (min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (var_7)))))));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_17 = ((/* implicit */short) ((((1198875803U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2]))))) << ((((~(((/* implicit */int) var_12)))) + (31)))));
            arr_12 [0] [i_1] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65521)) << (((arr_8 [14ULL] [i_1]) - (1330242338U)))))) <= (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) 3096091483U)) : (-1056822522466051771LL)))))) : (((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65521)) << (((((arr_8 [14ULL] [i_1]) - (1330242338U))) - (198006602U)))))) <= (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) 3096091483U)) : (-1056822522466051771LL))))));
            var_18 -= ((/* implicit */short) ((unsigned int) 26LL));
        }
        var_19 = min((((/* implicit */long long int) 3197108475U)), (3762539576621290164LL));
        var_20 = ((/* implicit */unsigned int) arr_6 [(_Bool)1]);
        var_21 = ((/* implicit */signed char) (-(((((/* implicit */int) (unsigned short)50710)) >> (((((/* implicit */int) (unsigned short)65535)) - (65533)))))));
    }
    for (short i_3 = 1; i_3 < 19; i_3 += 2) 
    {
        var_22 = ((/* implicit */unsigned int) 2096128ULL);
        var_23 ^= ((/* implicit */long long int) (unsigned short)21);
        var_24 -= ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_0 [i_3 - 1])), (arr_15 [i_3] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3 + 3]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))) | (6241205347002276679ULL))))) != (((/* implicit */unsigned long long int) -1267116451))));
        var_25 = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) 2147483647)), (1218024587U))) << (((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_1 [i_3 + 1])))) - (130)))));
    }
}
