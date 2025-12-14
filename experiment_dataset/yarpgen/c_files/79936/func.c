/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79936
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
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) max((888963557), (-233586570)));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 233586570)) ? (-233586584) : (-86638701)))) ? (((((/* implicit */_Bool) (-(233586557)))) ? (((((/* implicit */_Bool) 14256221145351952452ULL)) ? (((/* implicit */int) (unsigned char)138)) : (((/* implicit */int) (signed char)93)))) : (((-233586570) & (86638698))))) : (((-888963558) / (((((/* implicit */int) arr_0 [i_2])) * (((/* implicit */int) arr_1 [i_0]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 1; i_3 < 11; i_3 += 1) 
    {
        for (long long int i_4 = 1; i_4 < 10; i_4 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (arr_3 [0LL] [i_3] [i_3]))) : (max((-233586571), (((/* implicit */int) arr_1 [i_4]))))))))));
                arr_14 [i_3 + 1] [i_3] [i_3 + 1] = ((/* implicit */long long int) (unsigned char)194);
                arr_15 [i_3] [i_3 - 1] = ((/* implicit */int) (unsigned short)0);
                arr_16 [i_3] [(short)5] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((signed char) (unsigned short)15))) ? (((/* implicit */int) arr_2 [i_4])) : (((((/* implicit */_Bool) -233586571)) ? (((/* implicit */int) (short)32760)) : (((/* implicit */int) (_Bool)1)))))));
                arr_17 [i_3] [i_4 + 3] = ((/* implicit */_Bool) (+(((long long int) ((int) 2643701352509633573LL)))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((signed char) (signed char)111))) ? (((/* implicit */int) var_7)) : (min((-86638699), (((/* implicit */int) var_11)))))) << (((((var_8) + (5335448063742917585LL))) - (10LL)))));
    var_23 = ((/* implicit */signed char) max((max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) -233586543)) ? (var_8) : (((/* implicit */long long int) var_16)))))), (((/* implicit */long long int) max((max((((/* implicit */int) var_15)), (233586581))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))))))));
    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(233586542)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) (short)-32757)))))) : (((((/* implicit */_Bool) (signed char)-5)) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))) ? ((-(((/* implicit */int) var_15)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_11), (var_11))))) != (min((var_3), (((/* implicit */unsigned long long int) var_4))))))))))));
}
