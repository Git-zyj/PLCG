/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97816
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
    var_10 = ((/* implicit */short) ((288230376151711743ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((unsigned int) (unsigned short)51775)))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        arr_8 [(signed char)8] [(signed char)8] [i_1] [(signed char)8] [(signed char)8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 520453453U)) ? (3774513843U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32767)))));
                        arr_9 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (max((3774513843U), (((/* implicit */unsigned int) (short)-10853)))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1] [i_2] [i_3])) & (((/* implicit */int) arr_5 [i_0] [i_2] [i_0])))))));
                    }
                } 
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_0] [i_0]))) ? (((/* implicit */int) ((unsigned char) (short)838))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [(unsigned short)7] [i_0 - 1]))))))));
    }
    var_11 = ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) (+(520453450U)))))));
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) (unsigned char)182)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43110))) : (max((((/* implicit */long long int) (unsigned short)43110)), (((((/* implicit */long long int) 2095661560U)) * (0LL)))))));
}
