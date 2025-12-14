/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93031
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            arr_5 [i_0] [(signed char)9] [i_0] = ((/* implicit */_Bool) 13137224237286260804ULL);
            arr_6 [(unsigned char)4] = ((/* implicit */_Bool) min((((/* implicit */int) ((((unsigned long long int) arr_2 [12ULL])) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((-1743026571) != (arr_4 [i_0] [i_0] [i_0])))))))), ((-(((/* implicit */int) (unsigned char)205))))));
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            arr_9 [i_0] [13] [i_0] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) ((((-743846791) + (2147483647))) << (((/* implicit */int) (_Bool)0))))) ? (743846790) : (((/* implicit */int) ((-1743026570) <= (((/* implicit */int) var_8))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    {
                        arr_14 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_19)) <= (((/* implicit */int) (!(((/* implicit */_Bool) -1808673520))))))))) < (arr_3 [i_0])));
                        arr_15 [i_0] [6LL] [i_4] = ((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        }
        arr_16 [i_0] [i_0] = ((/* implicit */unsigned long long int) (signed char)124);
    }
    var_20 = ((/* implicit */unsigned short) 853165616049096095ULL);
}
