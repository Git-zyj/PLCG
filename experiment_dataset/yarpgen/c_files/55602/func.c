/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55602
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
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [(short)12] [i_0 + 2] [11] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [2U])) ? (((/* implicit */int) (unsigned char)142)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) max((((/* implicit */signed char) arr_1 [i_0 + 2])), ((signed char)(-127 - 1))))) : (((((/* implicit */int) (short)(-32767 - 1))) % (((/* implicit */int) arr_4 [i_0 + 2]))))))));
                arr_7 [(_Bool)1] [10LL] [i_0 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned char)100), (arr_0 [7U])))) ? (min((var_3), (((/* implicit */unsigned long long int) arr_4 [9ULL])))) : (((/* implicit */unsigned long long int) 8992966781789622804LL))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)82))))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [(_Bool)1] [(unsigned char)16] [i_0 + 2])), (max((arr_3 [(unsigned char)13] [(_Bool)1] [i_0 + 3]), (((/* implicit */unsigned short) (_Bool)1)))))))));
                arr_8 [i_0 + 2] [i_0 + 3] [5] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_0 + 3])), ((unsigned short)18704))))))));
                var_12 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [(unsigned char)3] [5LL] [i_0 + 2]))))) ? (((((/* implicit */_Bool) 5888902729166317886ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28073))) : (arr_2 [(_Bool)1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned char)71)) : (((/* implicit */int) arr_0 [(_Bool)1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [5LL])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)(-127 - 1)))))) && (((/* implicit */_Bool) arr_0 [i_0 + 2]))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) (_Bool)1);
    var_14 = ((/* implicit */short) ((var_8) - (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2053295935867726727LL)) ? (((/* implicit */int) (unsigned char)87)) : (((/* implicit */int) var_10))))) ? (max((824786280U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)95)))))))))));
    var_15 = ((/* implicit */unsigned long long int) var_6);
}
