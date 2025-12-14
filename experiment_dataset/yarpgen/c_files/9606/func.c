/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9606
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
    var_19 = max((max((min((var_9), (var_14))), (max(((unsigned short)37355), (var_5))))), (max((min((var_5), ((unsigned short)167))), (min(((unsigned short)14368), ((unsigned short)14352))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = max((max((max((var_13), (var_5))), (max((var_3), (var_7))))), (max((min(((unsigned short)65527), ((unsigned short)14368))), (min(((unsigned short)14368), (var_7))))));
        arr_3 [(unsigned short)8] [i_0] = min((max((min(((unsigned short)51168), (var_0))), (max((arr_1 [i_0]), (arr_1 [i_0]))))), (max(((unsigned short)36653), ((unsigned short)0))));
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (max((max((max((arr_5 [i_1]), ((unsigned short)16))), (min((var_17), ((unsigned short)20099))))), (max((min((var_7), (var_10))), (min((arr_5 [i_1]), ((unsigned short)9333)))))))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            for (unsigned short i_3 = 3; i_3 < 11; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    {
                        arr_14 [i_1] [i_1] [i_3] = min((max((min((var_4), ((unsigned short)56226))), (max((arr_13 [i_1] [i_2] [i_3] [i_4]), (var_11))))), (max((max((arr_1 [i_3 - 1]), ((unsigned short)6144))), (max((arr_6 [i_1]), ((unsigned short)22358))))));
                        arr_15 [i_1] [i_3] [i_3] [i_3] [i_1] = min((max((max((var_18), (var_10))), (max((var_1), (var_15))))), (min((max((arr_6 [(unsigned short)8]), (var_2))), (min((arr_8 [i_1] [i_4]), (arr_6 [i_2]))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 2; i_5 < 13; i_5 += 3) /* same iter space */
                        {
                            var_21 = max((max((max((var_1), (arr_10 [i_1] [i_1]))), (min(((unsigned short)45425), ((unsigned short)49152))))), (max((min(((unsigned short)14368), (var_18))), (min((var_0), (var_0))))));
                            var_22 = min((min((min((arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), ((unsigned short)49366))), (max((var_1), ((unsigned short)14368))))), (max((max((var_7), ((unsigned short)14367))), (min((var_16), (var_17))))));
                            arr_18 [i_5 - 2] [i_3] [i_3] [i_3] [i_1] = max((max((min(((unsigned short)32768), ((unsigned short)49143))), ((unsigned short)36653))), (max((max(((unsigned short)20099), (arr_4 [i_4]))), (max((var_8), ((unsigned short)65535))))));
                        }
                        for (unsigned short i_6 = 2; i_6 < 13; i_6 += 3) /* same iter space */
                        {
                            arr_21 [i_1] [i_3] [i_3 - 2] [(unsigned short)8] [i_3] [i_1] = max((max((max((arr_11 [i_1] [i_2] [i_3] [(unsigned short)13]), (arr_5 [i_3]))), (min(((unsigned short)60720), ((unsigned short)53839))))), (min((min((var_5), ((unsigned short)65532))), (max(((unsigned short)21089), (arr_11 [i_6 - 1] [i_4] [i_3] [i_1]))))));
                            arr_22 [i_1] [(unsigned short)4] [i_3] [i_4] [i_3] = min((max((max((arr_12 [i_1] [i_1] [i_1] [i_3] [i_1] [i_1]), ((unsigned short)14379))), (max((arr_4 [i_6]), ((unsigned short)49143))))), (min((max(((unsigned short)10), ((unsigned short)56242))), (max((var_15), (var_14))))));
                            arr_23 [i_2] [i_6] [i_6] [i_2] |= min((max((max(((unsigned short)0), (var_13))), (max((var_12), (arr_8 [i_1] [i_1]))))), (max((max((arr_16 [i_1] [(unsigned short)13] [i_3] [i_4] [i_4] [i_4] [i_6]), (var_17))), (max((arr_1 [i_3 + 1]), (arr_4 [i_3]))))));
                        }
                        for (unsigned short i_7 = 2; i_7 < 13; i_7 += 3) /* same iter space */
                        {
                            var_23 = min((max((max((arr_7 [i_1]), (arr_4 [i_1]))), (min(((unsigned short)0), ((unsigned short)34255))))), (max((max((arr_24 [i_7] [(unsigned short)8] [i_3] [i_1] [i_1]), ((unsigned short)7936))), (max(((unsigned short)39969), ((unsigned short)56442))))));
                            var_24 = ((/* implicit */unsigned short) min((var_24), (max((min((min(((unsigned short)33489), ((unsigned short)39029))), (max((var_16), (arr_11 [i_1] [i_1] [i_1] [i_1]))))), (min((max((var_9), (arr_1 [i_3]))), (max((var_10), (arr_16 [i_1] [i_1] [i_2] [i_3] [(unsigned short)7] [i_4] [i_7])))))))));
                            var_25 = max((min((max((var_1), ((unsigned short)60594))), (min((arr_0 [i_7 + 1]), (var_11))))), (max((max(((unsigned short)33727), ((unsigned short)53787))), (max((arr_12 [i_1] [i_2] [i_4] [i_1] [i_7] [i_1]), (arr_25 [i_2] [i_4] [i_7]))))));
                        }
                        var_26 = max((min((max((arr_26 [i_1] [i_2] [i_3] [i_3] [i_4] [(unsigned short)5]), (arr_5 [i_3]))), (min(((unsigned short)25290), (arr_20 [i_1] [i_1]))))), (max((max(((unsigned short)30536), (var_2))), (max(((unsigned short)33727), (var_15))))));
                    }
                } 
            } 
        } 
        arr_27 [i_1] [i_1] = max(((unsigned short)9325), ((unsigned short)49119));
        arr_28 [i_1] = max((max((min((var_3), ((unsigned short)56360))), (min((arr_5 [i_1]), (arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))), (min((min((var_9), (var_16))), (max((arr_7 [i_1]), (arr_10 [i_1] [i_1]))))));
    }
    for (unsigned short i_8 = 3; i_8 < 11; i_8 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) 
        {
            arr_34 [i_8] [i_9] [i_8] = min((min((min(((unsigned short)63767), (arr_0 [i_8]))), (min((arr_13 [i_9] [i_9] [i_9] [i_8 + 1]), (arr_32 [i_8 - 3] [i_8 - 1] [i_9]))))), (min((max((arr_4 [i_9]), ((unsigned short)34999))), (max(((unsigned short)1769), (arr_8 [i_9] [i_8]))))));
            arr_35 [i_8] = max((max((min(((unsigned short)38325), ((unsigned short)43802))), (max(((unsigned short)60102), (arr_19 [i_8 - 1] [i_8] [i_9] [i_9] [i_9]))))), (max((min((var_7), (arr_11 [i_9] [i_8] [i_8 + 1] [i_8]))), (min((var_0), (var_14))))));
            var_27 = max((min((max(((unsigned short)58198), (var_12))), (min(((unsigned short)44775), ((unsigned short)1233))))), (min((max((arr_26 [i_8] [i_8] [i_8] [i_8] [(unsigned short)1] [i_9]), (var_18))), (max((var_3), ((unsigned short)0))))));
        }
        var_28 &= max((max((max((var_0), (var_0))), (min(((unsigned short)19253), ((unsigned short)27493))))), (max((max((var_16), (var_9))), (min((arr_29 [i_8]), (var_5))))));
    }
    /* vectorizable */
    for (unsigned short i_10 = 0; i_10 < 17; i_10 += 2) 
    {
        arr_40 [i_10] = (unsigned short)0;
        var_29 = ((/* implicit */unsigned short) max((var_29), ((unsigned short)25650)));
        arr_41 [i_10] = (unsigned short)50821;
        var_30 = (unsigned short)44798;
    }
    var_31 = max((max((min(((unsigned short)33380), ((unsigned short)60948))), (min(((unsigned short)11083), ((unsigned short)17735))))), (max(((unsigned short)12842), ((unsigned short)65535))));
    var_32 = ((/* implicit */unsigned short) min((var_32), (max((min(((unsigned short)52336), ((unsigned short)46650))), (min(((unsigned short)16416), ((unsigned short)49152)))))));
    var_33 = min((max((min((var_12), ((unsigned short)5937))), (max((var_2), (var_9))))), (min((max((var_18), (var_6))), (min(((unsigned short)39036), (var_14))))));
}
