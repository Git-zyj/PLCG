/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74854
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
    var_14 = ((/* implicit */_Bool) ((((max((((/* implicit */long long int) (short)-3027)), (var_2))) * (((/* implicit */long long int) ((/* implicit */int) (short)-3027))))) * (((/* implicit */long long int) -282380129))));
    var_15 = ((/* implicit */long long int) max((((/* implicit */int) var_9)), (((int) var_8))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [(unsigned short)5] [i_0] = ((/* implicit */unsigned short) (~((~(((((/* implicit */_Bool) var_9)) ? (arr_1 [i_0]) : (((/* implicit */long long int) var_1))))))));
        var_16 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) (signed char)-36)) & (((/* implicit */int) (signed char)-99)))));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        var_17 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [i_1])) << (((var_7) - (7544354424958201060LL))))) % ((~(((/* implicit */int) arr_3 [i_1]))))));
        arr_5 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_1]))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) arr_3 [(_Bool)1]))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_6))) ^ (arr_4 [i_1]))) : (((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */long long int) var_11))))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) ((int) arr_6 [i_2]));
        arr_8 [i_2] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) ((short) (signed char)-99)))));
        arr_9 [i_2] = ((unsigned short) arr_3 [i_2]);
    }
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) var_9);
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)36)) % (arr_11 [i_3]))) % (((/* implicit */int) arr_3 [i_3]))))) ? (((/* implicit */unsigned long long int) ((17592186044415LL) * (((/* implicit */long long int) ((/* implicit */int) ((arr_4 [i_3]) < (487813239597942647LL)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (var_1) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((unsigned long long int) (signed char)-123))))));
        arr_12 [i_3] = ((/* implicit */int) max(((~(arr_6 [(unsigned short)9]))), (((((/* implicit */_Bool) arr_6 [i_3])) ? (arr_6 [i_3]) : (arr_6 [i_3])))));
    }
}
