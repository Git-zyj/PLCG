/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98211
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
    var_10 = ((/* implicit */short) var_4);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned int) ((min((14ULL), (((/* implicit */unsigned long long int) (unsigned char)63)))) != (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551601ULL))))))))));
        var_12 -= ((/* implicit */unsigned int) arr_0 [i_0]);
        var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0 + 1])))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 3; i_1 < 19; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) arr_2 [i_1]);
        var_14 = ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57414))) & (var_8)))) - (((var_7) + (14ULL))));
    }
    for (unsigned int i_2 = 3; i_2 < 19; i_2 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max(((-(var_7))), (((/* implicit */unsigned long long int) arr_4 [6ULL]))))) ? (((((/* implicit */unsigned long long int) var_6)) + (((var_7) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (37ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29483)))))) ? ((+(-1969290948735888532LL))) : (((/* implicit */long long int) var_6)))))));
        var_16 ^= ((/* implicit */short) (((-(min((var_8), (((/* implicit */unsigned int) (short)-12019)))))) / (((/* implicit */unsigned int) max(((-(((/* implicit */int) (short)10772)))), ((+(1532455175))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (unsigned char)63)), (11711744812073708533ULL)));
                    var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551594ULL)) ? ((((-(arr_5 [i_2]))) % (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)32754), ((short)-29622)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                for (int i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    {
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_3))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_8 = 0; i_8 < 20; i_8 += 3) /* same iter space */
                        {
                            arr_23 [i_2] [i_5] [i_6] [12ULL] [i_2] [i_8] = var_0;
                            var_20 ^= ((/* implicit */unsigned int) 37ULL);
                        }
                        for (signed char i_9 = 0; i_9 < 20; i_9 += 3) /* same iter space */
                        {
                            var_21 ^= ((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_2 - 3])) ^ (((/* implicit */int) arr_4 [i_2 + 1])))) & (((/* implicit */int) min(((short)-1920), (((/* implicit */short) arr_4 [i_2 - 3])))))));
                            arr_26 [i_2] [i_2] [i_5] [i_6] [i_2] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (min((((/* implicit */unsigned int) arr_19 [i_2] [10] [i_2] [i_2 + 1] [i_7] [i_2])), (var_1))) : (((/* implicit */unsigned int) ((arr_19 [14] [i_2] [i_2 - 1] [i_2 - 1] [i_7] [i_2]) ^ (((/* implicit */int) var_2)))))));
                        }
                        arr_27 [(_Bool)1] [i_2] [(short)13] [i_5] [i_2] [i_2] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (min((((/* implicit */unsigned long long int) var_6)), (var_0)))))));
                        var_22 |= ((/* implicit */unsigned short) var_4);
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((310300981004567241ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) (~(4294967283U))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (arr_5 [i_2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4050924917U)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) : (((((/* implicit */_Bool) 310300981004567235ULL)) ? (18446744073709551596ULL) : (((/* implicit */unsigned long long int) var_8)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2])))));
                    }
                } 
            } 
        } 
    }
}
