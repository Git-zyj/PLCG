/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68281
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_2 [i_1 - 4] [i_1 - 4])), ((short)13741))))) > (((((/* implicit */_Bool) (signed char)14)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-23)))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) ((signed char) ((long long int) arr_4 [i_0] [i_1 - 1] [i_1 - 1])));
                                var_14 = ((0U) * (((((unsigned int) var_1)) % (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_1 + 1] [i_0])) | (((/* implicit */int) (_Bool)1))))))));
                                var_15 *= ((/* implicit */unsigned char) var_12);
                                var_16 = ((/* implicit */unsigned int) ((short) ((min((8066053954391174783ULL), (((/* implicit */unsigned long long int) var_4)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
                                var_17 ^= ((/* implicit */signed char) arr_5 [i_0]);
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) (+(-371880095)));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        {
                            var_19 = (~(((/* implicit */int) arr_2 [i_0] [i_5])));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0]))))) && (((/* implicit */_Bool) min((((/* implicit */short) (signed char)-3)), ((short)-27288))))));
                            arr_19 [i_6] [i_6] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((long long int) (-(((((((/* implicit */int) arr_14 [i_0] [i_5] [i_6])) + (2147483647))) << (((((/* implicit */int) (signed char)26)) - (26))))))));
                            var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2444227081616838276LL)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((long long int) var_11)) : (((((/* implicit */_Bool) (signed char)-31)) ? (-7999134622491690460LL) : (5267926365178712639LL)))))) ? (((/* implicit */unsigned long long int) ((long long int) (unsigned short)50848))) : (((unsigned long long int) ((arr_15 [i_5]) && (((/* implicit */_Bool) var_0))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(8066053954391174799ULL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)14)))))))) : (min((var_7), (((/* implicit */long long int) var_9))))));
    /* LoopNest 2 */
    for (unsigned int i_7 = 2; i_7 < 19; i_7 += 3) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            {
                var_23 = ((/* implicit */int) arr_21 [i_7] [i_7]);
                var_24 = ((/* implicit */_Bool) max((var_24), (((((unsigned int) (unsigned short)39593)) != (((/* implicit */unsigned int) min((1750298408), ((+(((/* implicit */int) (signed char)-25)))))))))));
                var_25 -= ((((((/* implicit */int) min((var_10), (((/* implicit */unsigned short) (signed char)-39))))) != (((/* implicit */int) (signed char)111)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)14)) - (-190210756)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((4294967295U) < (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) : (((unsigned int) (unsigned char)65)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) var_2)), (arr_22 [i_7 - 1]))))));
                var_26 -= ((/* implicit */unsigned int) max((((((/* implicit */int) arr_23 [(unsigned short)1] [i_8])) * (((/* implicit */int) var_9)))), (((/* implicit */int) (signed char)111))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) var_7);
}
