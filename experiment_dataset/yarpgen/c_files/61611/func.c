/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61611
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_15)))))))) : (((/* implicit */int) ((signed char) var_4)))));
    var_17 = ((/* implicit */_Bool) ((((long long int) var_11)) - (((/* implicit */long long int) var_13))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)34662))))) ? (((var_11) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34682))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))) ? ((~(((/* implicit */int) var_3)))) : ((-(((/* implicit */int) min(((unsigned short)2308), ((unsigned short)30876))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (unsigned int i_3 = 3; i_3 < 17; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0]))) ? (((var_8) ? (arr_1 [i_0]) : (((/* implicit */int) arr_6 [i_0] [i_2] [i_3])))) : (((/* implicit */int) ((_Bool) (unsigned short)34662)))));
                        arr_13 [i_0] [(_Bool)1] [14LL] [i_1] = ((/* implicit */long long int) (unsigned short)30896);
                        arr_14 [i_0] [(unsigned char)5] [i_1] [i_3] = ((/* implicit */int) (((((+(arr_0 [i_2]))) - (((/* implicit */long long int) ((/* implicit */int) min((var_1), (var_10))))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_9 [i_1]) ? (var_13) : (4261753361U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30876))) : (((((/* implicit */_Bool) arr_8 [i_1])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
                        arr_15 [i_1] [i_1] [i_2] [(unsigned char)5] [(unsigned char)5] = ((/* implicit */int) var_3);
                    }
                } 
            } 
        } 
        arr_16 [i_0] [0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_5 [i_0] [i_0]) : (arr_5 [i_0] [i_0])))) ? (min((arr_5 [i_0] [i_0]), (arr_5 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_5 [i_0] [i_0]))))));
        arr_17 [2U] = var_10;
        arr_18 [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)127)) ? (3853222062U) : (((/* implicit */unsigned int) (+(var_9)))))), (((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned char) var_7))), ((-(((/* implicit */int) var_1)))))))));
    }
}
