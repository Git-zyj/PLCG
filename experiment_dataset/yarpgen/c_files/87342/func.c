/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87342
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            arr_6 [i_1] [i_1] = arr_5 [i_1];
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-5397)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)180))) : (826490146U)));
            arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((arr_2 [i_0]) != (arr_2 [i_1])));
        }
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_1 [i_0] [i_0]))));
        arr_8 [i_0] = ((/* implicit */long long int) ((976110940) - (-274358022)));
        var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [(short)17] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) ^ (((/* implicit */int) arr_1 [(unsigned short)16] [i_0]))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            var_22 = ((/* implicit */short) min((((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) arr_0 [i_0] [i_0])))))) : (((((/* implicit */_Bool) (short)-5397)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (arr_10 [i_2]))))), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (short)-19675)) ? (((/* implicit */int) (short)24655)) : (((/* implicit */int) (short)24655)))))))));
            var_23 &= ((/* implicit */short) ((unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)24576))) : (var_10)))) & (((long long int) arr_10 [i_2])))));
            var_24 = ((/* implicit */short) (!(((17473530256638323796ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2] [i_0])))))));
        }
        for (short i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            arr_15 [i_3] [4U] [i_0] &= ((/* implicit */unsigned int) (((+(2305772640469516288ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [4U])))));
            arr_16 [i_0] = ((/* implicit */long long int) max(((+(16457951233502190278ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_3] [i_0])) ? (((/* implicit */int) ((_Bool) arr_4 [i_0] [i_0] [i_0]))) : ((~(((/* implicit */int) var_3)))))))));
            var_25 = ((/* implicit */int) ((((/* implicit */unsigned int) ((int) (((-2147483647 - 1)) != (((/* implicit */int) (signed char)-1)))))) * (((unsigned int) ((((/* implicit */_Bool) var_3)) ? (16457951233502190278ULL) : (((/* implicit */unsigned long long int) 162961548U)))))));
            var_26 = ((/* implicit */unsigned short) ((signed char) (+((+(1988792840207361337ULL))))));
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_15)) == (max((var_9), (((/* implicit */int) arr_1 [i_3] [i_0])))))))) <= (min((((/* implicit */unsigned int) arr_3 [i_3] [i_3] [i_0])), (var_16)))));
        }
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
    {
        var_28 = ((/* implicit */int) arr_20 [i_4]);
        arr_21 [i_4] [i_4] = ((/* implicit */unsigned int) -18LL);
    }
    var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (((+(max((((/* implicit */int) (unsigned char)25)), (var_7))))) != (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))))))));
}
