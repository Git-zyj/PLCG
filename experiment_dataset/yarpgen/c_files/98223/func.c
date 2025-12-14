/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98223
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                var_17 += ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)1)) >> (((((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65534)) - (1996973556)))) + (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))) - (1228038265U))))) - (1070021237U)))));
                arr_6 [i_0 - 1] = (unsigned short)127;
            }
        } 
    } 
    var_18 ^= ((/* implicit */unsigned short) var_16);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            var_19 -= ((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)51637))) & (5344100150235291281LL)))));
            var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)127))));
        }
        arr_13 [(signed char)1] = (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65432))) / (18446744073709551593ULL))));
        arr_14 [i_2] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)124)) - (((/* implicit */int) (signed char)0)))) >> (((/* implicit */int) (unsigned short)11))));
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    {
                        arr_22 [i_5] [i_4] [i_5] [i_6] [i_6] = ((((7243402459660453875ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65521))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 0U)) && ((_Bool)1))))));
                        arr_23 [i_2] [i_4] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)3242)) | (((/* implicit */int) (unsigned char)8)))) - (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
    {
        arr_27 [i_7] = ((/* implicit */_Bool) ((((((((/* implicit */int) (unsigned short)65401)) << (((3113939162U) - (3113939154U))))) / ((-(((/* implicit */int) (unsigned char)103)))))) / (((/* implicit */int) (unsigned short)127))));
        arr_28 [i_7] = ((/* implicit */signed char) (+(2351647715651808467ULL)));
    }
}
