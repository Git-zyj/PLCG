/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99473
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
    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) ((((((var_3) != (((/* implicit */long long int) var_5)))) ? (min((var_8), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) var_4)))) % (((((_Bool) (unsigned char)12)) ? (var_1) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (short)5918))))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((arr_0 [i_0]) ^ (arr_0 [i_0])));
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            var_11 = ((/* implicit */long long int) 1989142611);
            var_12 = ((/* implicit */signed char) arr_5 [i_1 + 1] [i_1 + 1]);
            var_13 = ((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_6 [i_0] [i_1 - 1] [(_Bool)1]));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_14 = ((/* implicit */int) ((arr_3 [i_0]) & (arr_3 [i_2])));
            var_15 = ((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0]);
        }
        var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) ^ (arr_6 [(unsigned short)16] [(unsigned short)16] [i_0]))))));
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            arr_12 [i_3] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)244)))))));
            arr_13 [i_0] [i_3] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) == (arr_3 [i_0])));
            arr_14 [i_0] [i_3] = ((/* implicit */unsigned int) arr_1 [i_3]);
        }
    }
    var_17 = ((/* implicit */int) ((-6186303896404202410LL) < (((/* implicit */long long int) -287461091))));
    var_18 = ((/* implicit */_Bool) ((unsigned char) var_0));
}
