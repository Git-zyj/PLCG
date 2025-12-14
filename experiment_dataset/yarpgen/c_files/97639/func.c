/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97639
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (min((((/* implicit */unsigned int) (short)-4919)), (var_7)))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))), (((unsigned int) var_6)))) : ((-(((((/* implicit */_Bool) -3758995060213795366LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_7)))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) min(((-(((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_0))))))), (1219688910)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(-1219688937)))) ? (((((/* implicit */_Bool) var_9)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((unsigned long long int) ((short) var_5)))));
        arr_4 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
        arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1101218971)) ? (((/* implicit */int) (short)-4924)) : (((/* implicit */int) (short)4902))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */int) ((((/* implicit */_Bool) 215900628U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38154))) : (-12LL)));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) var_2))))))));
                    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */_Bool) 1345722917)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) 2932539779892901825LL)) ? (((/* implicit */int) arr_12 [i_2] [i_3])) : (((/* implicit */int) var_0)))))))));
                    var_14 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_9 [i_1])) ? (var_7) : (((/* implicit */unsigned int) var_2))))));
                }
            } 
        } 
        arr_15 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) arr_9 [i_1])) / (2932539779892901816LL))))));
    }
    for (unsigned short i_4 = 1; i_4 < 18; i_4 += 3) 
    {
        arr_18 [i_4] = ((/* implicit */unsigned long long int) var_1);
        var_15 = ((/* implicit */unsigned int) (_Bool)1);
    }
    var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))) ? ((+(var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) >= ((-(-5013668015850302411LL)))));
}
