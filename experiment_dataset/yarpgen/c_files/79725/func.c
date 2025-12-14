/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79725
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
    var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53200))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53200))) - (214412544858785899ULL)))));
    var_17 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) ((_Bool) (unsigned short)12335))))) < (((/* implicit */int) (short)30411))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)53200)) - (((((/* implicit */int) (unsigned char)175)) + (((/* implicit */int) (unsigned short)53200))))))) : (var_4)));
    var_19 = ((/* implicit */short) (+(((((((/* implicit */_Bool) (signed char)-50)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)91)) : (((/* implicit */int) var_5)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        var_20 = ((((((/* implicit */int) (unsigned char)0)) == (((/* implicit */int) (signed char)104)))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (unsigned short)12327))))) : (((/* implicit */int) arr_2 [i_0] [i_0 + 1])));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1] [i_2 + 2] = ((/* implicit */unsigned int) (+(-1396910946)));
                    var_21 = ((/* implicit */unsigned short) ((int) ((unsigned short) (unsigned char)152)));
                }
            } 
        } 
    }
    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        var_22 = ((/* implicit */int) (unsigned char)144);
        var_23 = ((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned long long int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_11))))), (((var_13) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3] [i_3]))))))));
        arr_14 [i_3] [i_3] = (unsigned char)255;
        var_24 = ((/* implicit */signed char) ((long long int) ((unsigned long long int) (unsigned char)255)));
    }
}
