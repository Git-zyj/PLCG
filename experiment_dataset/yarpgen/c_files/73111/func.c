/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73111
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) var_18);
        var_21 += ((/* implicit */int) arr_1 [i_0] [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
    {
        var_22 ^= ((/* implicit */signed char) max((((min((((/* implicit */unsigned long long int) var_0)), (arr_0 [i_1]))) << (max((-1577427111), (((/* implicit */int) (_Bool)1)))))), (3588093135119971654ULL)));
        var_23 = ((/* implicit */unsigned short) max((var_5), (((/* implicit */unsigned long long int) arr_2 [i_1] [(_Bool)1]))));
    }
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_7 [i_2]))));
        arr_9 [i_2] = ((/* implicit */_Bool) (signed char)-16);
        var_24 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_6 [i_2]) : (arr_6 [i_2])))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (6170543654455182191ULL)))));
        var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((_Bool) (unsigned short)65524))) : (((/* implicit */int) max((arr_1 [i_2] [i_2]), (arr_1 [i_2] [i_2]))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_26 = ((/* implicit */_Bool) max((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_12 [i_3]))))), (((arr_12 [i_3]) ^ (((/* implicit */int) arr_10 [i_3] [i_3]))))));
        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) min((144115188075855871ULL), (((/* implicit */unsigned long long int) ((((18302628885633695744ULL) < (((/* implicit */unsigned long long int) var_16)))) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_10 [i_3] [i_3]))))))))));
        arr_14 [i_3] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (((/* implicit */int) arr_11 [i_3] [i_3])) : (((/* implicit */int) arr_11 [i_3] [i_3])))));
        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) min((((((/* implicit */_Bool) 6170543654455182188ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)120))) <= (18302628885633695745ULL))))) : (((18302628885633695750ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [(unsigned short)15]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) arr_11 [i_3] [i_3]))))))))));
        var_29 = ((/* implicit */unsigned short) var_10);
    }
    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((min((var_5), (((/* implicit */unsigned long long int) var_13)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (-1998459605)))))))));
}
