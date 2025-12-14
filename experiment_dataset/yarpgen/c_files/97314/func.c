/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97314
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((18446744073709551592ULL) | (8201495524326306733ULL)))));
        /* LoopSeq 1 */
        for (long long int i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            arr_4 [i_0] = ((/* implicit */unsigned short) (_Bool)1);
            arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_0 [i_0]))))))))) | (((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_1] [i_1 + 2])) ? (arr_3 [i_0 + 1] [i_0 + 1] [i_1 - 3]) : (10245248549383244883ULL)))));
            arr_6 [i_0] = ((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_0))))), ((short)20146))));
        }
        arr_7 [6U] |= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 10245248549383244880ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0 - 1]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -417614767640121047LL)) ? (16146479198230607949ULL) : (((/* implicit */unsigned long long int) arr_1 [(unsigned short)5]))))))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 3; i_2 < 16; i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] [i_2] = ((/* implicit */int) ((arr_3 [i_2] [i_2 - 2] [i_2 - 2]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2] [i_2] [i_2 - 3])))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-1)) * (((/* implicit */int) arr_8 [i_2 - 1])))))));
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) 340199483U))));
        arr_11 [i_2 - 2] = ((/* implicit */long long int) ((unsigned short) ((arr_8 [8LL]) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_11)))));
    }
    var_16 = ((/* implicit */_Bool) min((var_16), (((((/* implicit */_Bool) (unsigned char)162)) || (((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((((/* implicit */_Bool) (unsigned short)18126)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)120)))))))))));
    var_17 ^= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_2)), (max((var_4), (((/* implicit */long long int) (unsigned char)194))))));
    var_18 -= ((/* implicit */unsigned char) ((((((((/* implicit */int) ((signed char) (unsigned char)228))) + (2147483647))) << (((var_11) - (8789244866479511695LL))))) & (((/* implicit */int) var_8))));
}
