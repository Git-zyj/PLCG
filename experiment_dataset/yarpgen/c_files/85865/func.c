/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85865
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
    var_11 = ((/* implicit */_Bool) var_5);
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        var_12 = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) * (((1062785738) - (1658993567)))));
        arr_3 [i_0] |= ((/* implicit */short) (~(((4294967275U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)134)))))));
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 23; i_1 += 3) /* same iter space */
        {
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) var_9);
            var_13 = 1893943649;
        }
        for (int i_2 = 1; i_2 < 23; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                arr_13 [i_0] [i_0 + 1] = (((_Bool)1) ? (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) ((((/* implicit */int) (short)28503)) != (-421848298)))))) : (-230635829));
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) max((arr_10 [i_0] [i_2] [i_3]), (((((/* implicit */_Bool) ((var_5) * (((/* implicit */int) arr_4 [i_2]))))) ? (((var_7) / (((/* implicit */int) var_9)))) : ((+(((/* implicit */int) (_Bool)1)))))))))));
                arr_14 [i_3] [(unsigned char)24] [i_2] = ((/* implicit */int) min((arr_2 [i_0] [i_2]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */int) (_Bool)1)) - (268435452))) : ((((_Bool)1) ? (1920) : (((/* implicit */int) (_Bool)1)))))))));
                arr_15 [20U] [i_2] [i_3] [i_3] = ((min((arr_6 [i_0] [i_2 - 1] [i_2 - 1]), (arr_10 [i_3] [i_0] [i_0]))) * (((/* implicit */int) (short)0)));
                arr_16 [i_2] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)10)) == (((/* implicit */int) arr_0 [i_0])))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) : (min((((/* implicit */unsigned int) var_1)), (arr_2 [i_3] [i_2])))))));
            }
            var_15 |= ((/* implicit */unsigned long long int) arr_11 [i_2]);
            arr_17 [i_0] [i_0 - 1] = arr_6 [i_0] [i_0] [i_2 - 1];
            arr_18 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) (((+(-1893943641))) + (((/* implicit */int) (!(((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_0 [i_2])))))))));
        }
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        arr_21 [i_4] |= ((/* implicit */int) var_3);
        var_16 = ((/* implicit */_Bool) min((var_16), (((((/* implicit */unsigned long long int) max((((((/* implicit */int) (short)(-32767 - 1))) + (1893943649))), ((-(((/* implicit */int) (_Bool)1))))))) < (max((((((/* implicit */_Bool) var_10)) ? (9148815269267718957ULL) : (((/* implicit */unsigned long long int) arr_10 [22] [i_4] [i_4 - 1])))), (((unsigned long long int) arr_8 [i_4] [i_4]))))))));
    }
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_6))));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3335889085U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)27918))))) ? (min((((var_1) / (((/* implicit */int) var_10)))), (((((/* implicit */int) var_6)) / (((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) ((16886008597091655178ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)164)))))) ? ((-(((/* implicit */int) (_Bool)1)))) : ((+(var_5)))))));
}
