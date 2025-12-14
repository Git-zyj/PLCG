/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79972
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
    var_13 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned short)65527), (((/* implicit */unsigned short) var_3))))) ? (((((((/* implicit */int) var_9)) != (((/* implicit */int) (unsigned short)9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 65535U)))))) : (((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3250))) : (var_6))))) : (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_5)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 11798683033573798362ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((max((-2789006128869001227LL), (((/* implicit */long long int) (unsigned short)9)))) < (((/* implicit */long long int) ((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) -1LL)) ? (4294967283U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                arr_6 [i_0] = ((/* implicit */int) (~(((((/* implicit */_Bool) (short)-3251)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-6950134103334160071LL)))));
                arr_7 [i_1] = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) (+(65535U)))) % (((((/* implicit */_Bool) 927923530557853516LL)) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (arr_4 [i_0] [i_1] [i_0]))))), (((unsigned long long int) (-(((/* implicit */int) (short)1)))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_14 = min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_1] [i_0]))) >= (4294901761U))))) ^ (min((arr_10 [i_0] [i_1] [i_2]), (((/* implicit */unsigned long long int) arr_0 [i_0])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (short)16415))) : (arr_1 [i_0])))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (unsigned short)15089)) << (((var_7) - (2844797990126985559LL)))))))));
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)73)) ? (arr_4 [i_2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)49152)) : (((/* implicit */int) (short)-5))))) : (max((((/* implicit */unsigned long long int) 21LL)), (15546903776408362396ULL))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_0 [i_2]) : (var_8)))), (min((((/* implicit */unsigned long long int) var_2)), (arr_10 [i_2] [i_1] [i_0]))))))))));
                    arr_11 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_11)), (var_1)))), (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (2899840297301189218ULL) : (((/* implicit */unsigned long long int) arr_0 [i_1]))))))) || (((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_9 [i_2] [i_1] [i_0])) ? (65530U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
                }
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) min(((+(min((var_8), (((/* implicit */long long int) var_10)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294901772U)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
}
