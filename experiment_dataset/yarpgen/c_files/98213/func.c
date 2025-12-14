/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98213
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))));
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)124))))), (((((/* implicit */long long int) ((/* implicit */int) var_5))) + (arr_1 [i_0] [i_0])))))) ? (((/* implicit */int) ((((((/* implicit */int) (unsigned char)239)) ^ (((/* implicit */int) (unsigned char)218)))) == (((/* implicit */int) ((arr_2 [i_0]) && (((/* implicit */_Bool) var_1)))))))) : (((/* implicit */int) ((_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) arr_0 [i_0] [i_0]))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3128688775U)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (unsigned short)12422))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) (+((-(((/* implicit */int) arr_5 [i_1] [i_1]))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                {
                    var_12 = ((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_1]))));
                    var_13 = ((/* implicit */unsigned char) ((10832794055338145087ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_3])))));
                    var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_1] [i_1])) ? (((/* implicit */int) arr_8 [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_5 [i_3] [i_3])))) : (((((/* implicit */_Bool) arr_0 [i_3] [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)25629))))))) ? (var_6) : (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_0 [i_1] [i_3]))))))));
                }
            } 
        } 
        arr_13 [i_1] = ((/* implicit */unsigned long long int) var_7);
    }
    var_15 = ((/* implicit */unsigned int) var_9);
}
