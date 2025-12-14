/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81648
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
    var_17 = ((/* implicit */long long int) var_14);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_18 = (+(((((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((/* implicit */int) (short)-18721))))) | (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_2)))))));
        var_19 += (-(min((arr_1 [i_0]), (((((/* implicit */_Bool) 2088876352)) ? (1175555712) : (((/* implicit */int) (_Bool)1)))))));
        var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) max((-1532697109), (((/* implicit */int) (unsigned short)56526)))))));
        var_21 = ((/* implicit */int) arr_0 [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (~(min((2088876352), (((/* implicit */int) (!(((/* implicit */_Bool) -1727150464)))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) arr_4 [i_1]);
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 4; i_2 < 9; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    for (long long int i_5 = 3; i_5 < 10; i_5 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (unsigned short)9016))));
                            var_24 = ((/* implicit */unsigned long long int) ((((((unsigned long long int) var_6)) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (var_3))))))) ? (((/* implicit */int) (unsigned short)9010)) : (max((((/* implicit */int) arr_8 [i_2 + 3] [i_2 - 4] [i_5 - 2] [i_5 - 1])), (((((/* implicit */int) (short)25467)) + (((/* implicit */int) (short)18721))))))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_0)) >= (var_16))))))) ? (arr_4 [i_2 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) arr_8 [i_2] [i_2] [11] [i_2])))) || (((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) arr_9 [i_2] [i_2] [(unsigned char)10])))))))))));
            var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)18720)))))));
            var_27 = ((/* implicit */_Bool) 3873742360U);
        }
    }
    var_28 ^= ((/* implicit */unsigned int) min(((~(((/* implicit */int) ((((/* implicit */int) (unsigned char)86)) != (1986141926)))))), (var_11)));
}
