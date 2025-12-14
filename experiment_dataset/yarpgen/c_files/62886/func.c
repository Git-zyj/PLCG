/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62886
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 8; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_2] = arr_2 [i_2] [i_2];
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (short)-18254)) : (((/* implicit */int) ((short) 17907863597624997020ULL)))))))));
                    arr_9 [(unsigned short)4] [(_Bool)0] [i_2] [i_2] &= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min((var_6), (((/* implicit */short) arr_6 [i_1] [(_Bool)1] [i_1]))))) ? (((/* implicit */unsigned long long int) var_1)) : (17907863597624997020ULL)))));
                    var_16 *= ((/* implicit */signed char) min((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) arr_2 [i_2 - 2] [i_1 + 1])) ? (((/* implicit */int) (short)-18270)) : (((/* implicit */int) (short)32404))))));
                    var_17 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)18254)) ? (((/* implicit */int) (unsigned short)44510)) : (((/* implicit */int) var_11))))) && (((/* implicit */_Bool) (short)-5781))))), (max((min((-975167014898505024LL), (((/* implicit */long long int) (unsigned short)65535)))), (((/* implicit */long long int) 1007460264U))))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned short) ((long long int) ((min((15065602678349132020ULL), (((/* implicit */unsigned long long int) 17U)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_1 [i_0])))))));
    }
    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] [i_3] |= ((/* implicit */unsigned char) arr_2 [i_3] [i_3]);
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((unsigned long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_14)))))))));
        /* LoopSeq 1 */
        for (signed char i_4 = 2; i_4 < 10; i_4 += 1) 
        {
            arr_17 [i_4] [i_4] = ((/* implicit */short) min((((15065602678349132020ULL) ^ (((/* implicit */unsigned long long int) arr_10 [i_3])))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3] [i_3] [(signed char)4]))))))))));
            var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min(((short)-18254), (((/* implicit */short) ((signed char) 15065602678349132029ULL)))))), ((-(max((((/* implicit */unsigned int) (unsigned char)193)), (1007460259U)))))));
        }
        var_21 |= (unsigned short)33084;
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5] [i_5])) ? (((/* implicit */int) arr_18 [i_5] [i_5])) : (((/* implicit */int) arr_18 [i_5] [i_5]))))) ? (((((/* implicit */_Bool) (-(arr_19 [i_5])))) ? (arr_19 [13ULL]) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_18 [i_5] [i_5])))))) : (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [(unsigned short)1]))))), (((int) var_3))))));
        arr_20 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)14))))) ? (2347143361U) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [6LL] [i_5])) ? (-926034129450712508LL) : (((/* implicit */long long int) arr_19 [i_5]))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)193))) : (2581591218U))) : (min((4294967295U), (((/* implicit */unsigned int) (short)15252))))))));
    }
    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
    {
        var_23 = ((/* implicit */int) max((var_23), ((+(((((/* implicit */_Bool) 975167014898505024LL)) ? (((/* implicit */int) (short)-15262)) : (((/* implicit */int) (short)11210))))))));
        arr_24 [(_Bool)1] = ((/* implicit */long long int) arr_19 [i_6]);
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_6])) ? (((((/* implicit */int) arr_22 [i_6] [i_6])) | (((/* implicit */int) (unsigned char)226)))) : (((/* implicit */int) arr_18 [i_6] [i_6]))))) ? ((-(((/* implicit */int) max(((unsigned short)65529), (((/* implicit */unsigned short) var_9))))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) (short)-18254))))) / (((((/* implicit */_Bool) arr_21 [5ULL])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_18 [9] [i_6])))))))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
    {
        for (short i_8 = 3; i_8 < 18; i_8 += 2) 
        {
            {
                var_25 = ((/* implicit */short) ((max((((/* implicit */unsigned int) (short)18254)), (3199591698U))) % (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 15065602678349132029ULL)))) ? (((((/* implicit */_Bool) (short)32744)) ? (((/* implicit */int) arr_18 [(unsigned char)10] [i_8])) : (arr_25 [i_7]))) : (((/* implicit */int) (unsigned short)65509)))))));
                arr_30 [i_7] [i_8 - 3] = ((/* implicit */unsigned char) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 374818315901387483LL))));
            }
        } 
    } 
}
