/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9256
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (max(((_Bool)1), ((_Bool)1)))));
                                var_19 = ((/* implicit */signed char) (~(max((((((/* implicit */unsigned long long int) 1109292810U)) % (var_2))), (17227124381546027023ULL)))));
                                arr_14 [i_0] [i_3] [i_2 - 1] [i_2 - 1] [i_4] = (i_3 % 2 == zero) ? (((/* implicit */signed char) (+(((arr_0 [i_0]) ? (((17227124381546027023ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_3] [i_2] [i_3] [i_4]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_3]))) / (17227124381546027023ULL)))))))) : (((/* implicit */signed char) (+(((arr_0 [i_0]) ? (((17227124381546027023ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_3] [i_2] [i_3] [i_4]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_3]))) / (17227124381546027023ULL))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 2; i_5 < 19; i_5 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) (signed char)113))) / (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) -2077275400)) : (arr_10 [i_5] [(signed char)8] [(signed char)8] [i_5] [i_2] [(short)18])))))))));
                        arr_17 [i_0] [i_0] [i_5] = ((signed char) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) min((861844932907879434ULL), (1219619692163524593ULL))))));
                    }
                    for (unsigned int i_6 = 2; i_6 < 19; i_6 += 2) /* same iter space */
                    {
                        arr_20 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (var_10)))) ? (((((/* implicit */unsigned long long int) ((320679253U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)7)))))) & (((17227124381546027027ULL) | (var_3))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [i_2] [i_2 + 2] [i_6 - 1] [i_6 - 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (1219619692163524605ULL)))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((21U) * (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) 131449951))) % (((/* implicit */int) (_Bool)1)))))))));
                            arr_23 [i_2] [i_1] [20LL] [i_7] [i_7] [i_1] [i_7 + 1] = (unsigned short)37514;
                        }
                        for (int i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) (signed char)31)), (((((/* implicit */int) (_Bool)1)) - (arr_24 [i_0] [i_1] [i_1] [i_2] [i_6] [i_8]))))))));
                            var_23 = ((/* implicit */signed char) arr_0 [i_8]);
                        }
                    }
                    for (unsigned int i_9 = 2; i_9 < 19; i_9 += 2) /* same iter space */
                    {
                        arr_30 [(_Bool)0] [i_1] [3U] [i_1] = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_17))))) % ((~(arr_10 [i_0] [i_0] [i_1] [i_2] [i_9] [i_9 - 2]))))), (((/* implicit */unsigned long long int) (signed char)9))));
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (17584899140801672182ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -2077275412)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (var_10))))));
                    }
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) min((arr_4 [i_0]), (var_1)))) + ((-(((/* implicit */int) var_6))))))))));
                }
            } 
        } 
    } 
    var_26 -= ((((/* implicit */_Bool) 1746470852U)) ? ((-(var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))));
    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) 2077275412))));
}
