/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60246
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
    var_17 = ((/* implicit */unsigned short) max((8318864913495121111ULL), (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (unsigned short)65512)))), (((0) >> (((((/* implicit */int) (unsigned short)2768)) - (2742))))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)62755)) ? (((/* implicit */int) (unsigned short)4081)) : (arr_2 [i_0])))) % (((unsigned int) (signed char)107)))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned char)235))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)2760)))))))))));
        arr_4 [i_0] [i_0] |= ((/* implicit */signed char) 77337030U);
        arr_5 [i_0] = ((/* implicit */unsigned char) (_Bool)1);
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) ((((unsigned int) arr_2 [i_1])) * (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2769))) + (var_1))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1])))))))));
        arr_9 [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)216), ((unsigned char)44))))) | (((var_9) << (((var_6) - (2629460505U)))))))) || (((/* implicit */_Bool) ((unsigned long long int) (+(arr_7 [i_1])))))));
    }
    var_18 = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (unsigned char)214)))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 14562845532074141787ULL)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)237)))))))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            {
                var_19 = arr_12 [i_2];
                arr_15 [i_3] = ((/* implicit */signed char) (+(((-6024342789136369760LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2777)))))));
                var_20 |= ((/* implicit */unsigned short) (!(((arr_2 [i_3]) > (arr_2 [i_3])))));
            }
        } 
    } 
}
