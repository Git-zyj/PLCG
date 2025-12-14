/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63951
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
    var_10 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) - (-9168936765706187587LL)))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)34)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((156282162) <= (((/* implicit */int) (unsigned char)13))))))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)30435))) <= (((((/* implicit */long long int) 156282164)) ^ (-9168936765706187587LL))))))));
    var_11 = ((/* implicit */unsigned long long int) -156282165);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) 156282162))));
            var_13 = ((/* implicit */_Bool) min((var_13), (((((((/* implicit */_Bool) (unsigned short)17881)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245))) : (6206956479513601251ULL))) >= (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)34))) * (342564103U))))))));
        }
        for (unsigned int i_2 = 2; i_2 < 18; i_2 += 3) 
        {
            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((68451041280ULL) >> (((13592958008615882389ULL) - (13592958008615882363ULL)))))) ? (((2612255724U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-32745))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))));
            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3952403210U)) | (68451041280ULL)))) || ((_Bool)0)));
            var_16 = ((((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (unsigned short)65506)))) && (((/* implicit */_Bool) (signed char)47)));
            var_17 = ((/* implicit */short) (signed char)109);
        }
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 3) 
        {
            arr_10 [i_0] [i_0] = ((/* implicit */_Bool) (unsigned short)14801);
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                for (unsigned int i_5 = 1; i_5 < 20; i_5 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            var_19 = ((/* implicit */_Bool) (unsigned short)50735);
                            arr_19 [i_0] [i_3] [i_4] [i_5] [i_6] [i_0] [i_3 - 1] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)50072)) >> ((((((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)32742)))) - (32740)))));
                        }
                        var_20 = ((/* implicit */long long int) (short)22148);
                        var_21 *= ((/* implicit */unsigned long long int) 4294967274U);
                    }
                } 
            } 
        }
        var_22 = ((/* implicit */_Bool) (signed char)-79);
    }
}
