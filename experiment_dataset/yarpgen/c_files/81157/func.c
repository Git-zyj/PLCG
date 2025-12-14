/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81157
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
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 395348058692113615ULL)) ? (((((/* implicit */_Bool) 3776981195912203379ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)52))) : (3776981195912203385ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-35)))))) ? (((/* implicit */int) (unsigned char)132)) : (((/* implicit */int) (unsigned char)190)))))));
    var_21 = ((((/* implicit */_Bool) (unsigned char)15)) ? (5785608001444136396ULL) : (((((/* implicit */_Bool) (((_Bool)1) ? (3776981195912203376ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)170)))))) ? (18446744073709551601ULL) : ((((_Bool)1) ? (1400905873081841048ULL) : (3776981195912203359ULL))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_22 = 5785608001444136401ULL;
        arr_2 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)26)) ? (14669762877797348247ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)154)))))) ? (((((/* implicit */_Bool) (unsigned char)183)) ? (8881654741938467159ULL) : (8881654741938467156ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 2) 
    {
        arr_6 [i_1 - 1] [i_1] = ((((/* implicit */_Bool) (unsigned char)178)) ? (6662414025150973924ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
        arr_7 [i_1] [i_1] |= ((/* implicit */unsigned char) 18446744073709551608ULL);
    }
    /* vectorizable */
    for (signed char i_2 = 1; i_2 < 20; i_2 += 3) 
    {
        var_23 = 18446744073709551615ULL;
        var_24 ^= ((/* implicit */signed char) (unsigned char)20);
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)35)) ? (5785608001444136396ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)76))) : (((((/* implicit */_Bool) 6755399441055744ULL)) ? (3776981195912203347ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)94)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    {
                        var_26 = ((/* implicit */unsigned char) max((var_26), ((unsigned char)67)));
                        arr_19 [i_2 - 1] [i_3] [i_2] [i_5] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)186)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10144251917140704896ULL)));
                        arr_20 [i_2] [i_4] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */int) (unsigned char)245)) : (((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)17))))));
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)167)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)115))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)95))) : (5199535450355273385ULL)));
                    }
                } 
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned long long int) (unsigned char)231);
    var_29 = (unsigned char)79;
}
