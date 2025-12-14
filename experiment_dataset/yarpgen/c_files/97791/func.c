/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97791
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
    var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_5))) - (7066474762517570149LL)));
    var_16 = ((/* implicit */unsigned int) (~(((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)116))) <= (var_14))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) + (7066474762517570169LL))) : (((/* implicit */long long int) ((var_14) / (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1073741824)) ? (((/* implicit */int) var_3)) : ((((-(-1073741840))) & (((/* implicit */int) (signed char)97))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_18 ^= ((/* implicit */unsigned char) (~(25U)));
                    var_19 = (i_0 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) << (((((((/* implicit */unsigned long long int) arr_1 [i_0])) + (max((((/* implicit */unsigned long long int) var_2)), (arr_5 [i_0] [i_0] [i_0] [i_2]))))) - (3519627961446985338ULL)))))) : (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) << (((((((((/* implicit */unsigned long long int) arr_1 [i_0])) + (max((((/* implicit */unsigned long long int) var_2)), (arr_5 [i_0] [i_0] [i_0] [i_2]))))) - (3519627961446985338ULL))) - (2620762586191830556ULL))))));
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */short) var_7);
        var_20 = ((/* implicit */long long int) min((min((((/* implicit */unsigned char) var_1)), (((unsigned char) (unsigned char)237)))), (((/* implicit */unsigned char) ((arr_1 [i_0]) < (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)81)) ? (((/* implicit */int) (unsigned short)56138)) : (((/* implicit */int) (unsigned char)225))))))))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
    {
        var_21 += ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) -7066474762517570149LL))))) >> (((max((2441800635211461832LL), (((/* implicit */long long int) var_5)))) - (2441800635211461803LL)))));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (min((((/* implicit */unsigned int) (signed char)-98)), (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? ((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [(signed char)12] [2LL] [i_3])) : (((/* implicit */int) var_4)))))) : (((((/* implicit */_Bool) max((arr_2 [i_3]), (((/* implicit */unsigned int) var_1))))) ? (((((/* implicit */int) (unsigned short)62205)) ^ (((/* implicit */int) (_Bool)1)))) : ((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))))))))));
        var_23 -= ((/* implicit */unsigned char) arr_0 [10U] [10U]);
    }
    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) /* same iter space */
    {
        arr_14 [i_4] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) var_8)) : (-2147483643))) + (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_6 [i_4] [i_4] [3LL] [3LL])) : (((/* implicit */int) arr_6 [i_4] [i_4] [i_4] [i_4]))))));
        arr_15 [i_4] = ((/* implicit */int) (~(max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))), ((+(arr_9 [5ULL] [i_4])))))));
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) min((arr_12 [i_4] [i_4]), (((/* implicit */long long int) 1579138430U))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_4] [i_4])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0))))) : ((~(arr_12 [i_4] [16LL]))))))));
    }
}
