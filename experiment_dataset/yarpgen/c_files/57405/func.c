/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57405
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) (_Bool)0))));
        var_11 = (!(((/* implicit */_Bool) min((3907386371U), (((/* implicit */unsigned int) (~(((/* implicit */int) var_4)))))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) (unsigned short)19984);
            arr_6 [i_1] [14U] [4ULL] = ((/* implicit */unsigned int) ((((/* implicit */int) (!((_Bool)0)))) << (((((/* implicit */long long int) (-(((/* implicit */int) var_1))))) / ((-(-9223372036854775804LL)))))));
            var_12 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), (((((/* implicit */int) (unsigned short)34719)) << (((((((/* implicit */int) (short)-25105)) + (25124))) - (19)))))));
            var_13 = ((/* implicit */unsigned int) var_1);
        }
        var_14 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) (-2147483647 - 1))), (max((387580940U), (((/* implicit */unsigned int) (_Bool)0)))))), (((/* implicit */unsigned int) (~(var_9))))));
        var_15 = ((/* implicit */short) (+(10337834514358639387ULL)));
    }
    for (long long int i_2 = 1; i_2 < 21; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            arr_12 [i_3] [i_2] = ((/* implicit */unsigned short) var_9);
            arr_13 [i_3] [i_2] [i_3] = ((/* implicit */signed char) (~(((min((var_9), (((/* implicit */int) (_Bool)1)))) << ((((+(var_2))) - (11656719592201842831ULL)))))));
            var_16 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((unsigned char) (short)25105))))) && ((!(((/* implicit */_Bool) (-(-2194933353220808575LL))))))));
            var_17 = ((/* implicit */long long int) max((var_5), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4)))))));
        }
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 23; i_6 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(var_2)))) || (((((/* implicit */int) var_6)) > (((/* implicit */int) (_Bool)1))))));
                            arr_26 [(_Bool)1] [i_2] [17U] [i_6] = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_6)))) & (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_1))))))))));
                            arr_27 [i_2] [i_2] [i_5] [i_2 + 1] [i_2] [i_4] = ((/* implicit */unsigned short) (+((-(2339443652U)))));
                            var_19 = (~(min((((/* implicit */int) var_8)), (var_9))));
                        }
                        arr_28 [i_2] = 387580924U;
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 4) 
    {
        arr_31 [i_8] = min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (387580924U)))), ((-(7526544624999971663LL))));
        var_20 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))), ((+(425092258423593477LL)))));
        var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) min((var_8), (var_8))))));
        arr_32 [i_8] [i_8] = min((((/* implicit */unsigned int) ((unsigned char) (short)-25105))), ((+(1612138239U))));
    }
    var_22 = ((/* implicit */unsigned short) (+(var_3)));
    var_23 = ((/* implicit */int) var_2);
    var_24 += ((/* implicit */long long int) (-(((/* implicit */int) var_4))));
}
