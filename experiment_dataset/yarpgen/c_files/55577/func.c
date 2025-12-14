/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55577
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
    var_18 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9985))) : (14202498099345958296ULL));
    var_19 += ((signed char) var_13);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
        var_20 = ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (+(arr_2 [14U]))))));
                    arr_10 [i_0] = max((((/* implicit */unsigned long long int) arr_9 [i_0])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-124)))))) ? ((((_Bool)1) ? (arr_6 [11LL] [i_1] [i_2]) : (arr_4 [i_0]))) : (arr_4 [i_0]))));
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
    {
        var_22 &= ((/* implicit */long long int) (((-(4244245974363593320ULL))) * (((min((arr_6 [i_3] [i_3] [i_3]), (((/* implicit */unsigned long long int) (signed char)-126)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            for (int i_5 = 3; i_5 < 14; i_5 += 2) 
            {
                {
                    arr_21 [i_3] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned char)98), (((/* implicit */unsigned char) (signed char)117))))) || (((/* implicit */_Bool) arr_18 [i_5 - 1] [i_4] [9] [9]))));
                    arr_22 [i_3] [i_4] [i_3] [i_3] |= ((/* implicit */unsigned long long int) arr_20 [i_5 + 2] [i_5 + 1] [i_5 + 1]);
                    arr_23 [i_3] [i_3] [i_3] [i_5 - 3] = ((/* implicit */unsigned short) var_4);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
    {
        arr_28 [i_6] = ((/* implicit */int) ((short) arr_17 [i_6]));
        arr_29 [i_6] = ((/* implicit */_Bool) var_3);
    }
    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_8 = 0; i_8 < 16; i_8 += 1) 
        {
            var_23 ^= ((/* implicit */long long int) arr_18 [i_8] [i_8] [i_8] [(signed char)0]);
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_7])) ? (((/* implicit */int) arr_11 [i_8])) : (((/* implicit */int) arr_11 [i_8]))))) ? (((int) ((((/* implicit */_Bool) arr_31 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_10)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_31 [i_7]))))) ? (((/* implicit */int) var_14)) : (((((/* implicit */int) var_5)) << (((((var_11) + (673788503))) - (20))))))))))));
            var_25 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((signed char) ((int) var_4)))), (451993438809069149ULL)));
        }
        for (unsigned char i_9 = 2; i_9 < 13; i_9 += 3) 
        {
            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) var_1))));
            arr_37 [i_7] [i_9] = ((/* implicit */unsigned char) ((signed char) ((((248302332) / (((/* implicit */int) (short)23616)))) / (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)51)) : (((/* implicit */int) (signed char)-127)))))));
            var_27 = ((/* implicit */signed char) ((unsigned long long int) var_17));
            var_28 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_8)))));
        }
        arr_38 [i_7] = ((/* implicit */unsigned long long int) ((long long int) arr_20 [i_7] [i_7] [i_7]));
        var_29 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) -523005082)) ? (((/* implicit */unsigned long long int) ((long long int) -263361898))) : (10242122375267761572ULL)))));
        /* LoopNest 2 */
        for (unsigned int i_10 = 4; i_10 < 12; i_10 += 4) 
        {
            for (signed char i_11 = 0; i_11 < 16; i_11 += 2) 
            {
                {
                    arr_44 [i_7] [i_10] [i_7] = ((/* implicit */short) ((signed char) ((unsigned long long int) (unsigned short)53339)));
                    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) % (((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126))) : (var_3))))) : (((/* implicit */unsigned long long int) ((((_Bool) 10720904316644508253ULL)) ? (((((/* implicit */_Bool) arr_18 [i_7] [i_7] [i_10] [i_11])) ? (200245604U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_11]))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_33 [i_10]), (((/* implicit */unsigned char) (signed char)32)))))))))))));
                    arr_45 [i_10] [i_10] [i_10] [i_10] |= ((/* implicit */unsigned short) arr_19 [(short)4]);
                    var_31 += ((/* implicit */unsigned char) (-(((/* implicit */int) arr_9 [i_10]))));
                }
            } 
        } 
        var_32 = ((/* implicit */short) (!(((arr_30 [i_7]) >= (((/* implicit */long long int) var_11))))));
    }
}
