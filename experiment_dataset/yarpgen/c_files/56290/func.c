/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56290
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
    var_15 = ((/* implicit */unsigned int) 2042451519600989483LL);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [6LL] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (unsigned char)99);
                        arr_12 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 2]))) == (2849867320224946241LL)));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_10 [4LL] [i_0])) || (((/* implicit */_Bool) 4741026221142325685LL)))));
        arr_13 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [5U] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) + (max((-4741026221142325682LL), (-369193542564291753LL)))));
        arr_14 [(unsigned short)6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -4741026221142325686LL)) ? (((/* implicit */long long int) (((~(arr_8 [6U] [i_0] [i_0] [i_0]))) >> (((-7273312234281142332LL) + (7273312234281142358LL)))))) : (((((/* implicit */_Bool) ((arr_8 [i_0] [i_0] [i_0] [i_0]) << (((4039676898U) - (4039676878U)))))) ? (4741026221142325711LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0])))))));
    }
}
