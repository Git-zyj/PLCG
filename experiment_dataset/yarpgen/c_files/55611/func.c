/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55611
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_4 [4] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 598433983)), (var_12)))) ? (((((((/* implicit */int) (unsigned short)23936)) < (((/* implicit */int) var_11)))) ? (max((((/* implicit */unsigned long long int) 2147483647)), (818583844653498372ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)23936))))))) : (((/* implicit */unsigned long long int) var_15))));
        arr_5 [(_Bool)1] = ((/* implicit */unsigned short) ((signed char) var_2));
    }
    for (int i_1 = 4; i_1 < 18; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    {
                        arr_18 [i_2] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((+(1140126882))) - (((/* implicit */int) (unsigned short)23952)))))));
                        arr_19 [i_1] [i_4] [i_4] [i_4] = ((((/* implicit */_Bool) (~(var_15)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((int) (_Bool)0)));
                    }
                } 
            } 
        } 
        arr_20 [(unsigned char)9] = ((/* implicit */int) max((0LL), (((/* implicit */long long int) max((arr_16 [i_1] [(signed char)11] [17U] [(_Bool)1] [i_1] [i_1]), (((/* implicit */unsigned short) (unsigned char)75)))))));
        arr_21 [i_1] = ((/* implicit */unsigned int) var_0);
        arr_22 [4] = ((((/* implicit */_Bool) (unsigned char)75)) || (((/* implicit */_Bool) (+(((var_1) + (((/* implicit */unsigned int) var_5))))))));
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        arr_27 [1] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (2147483647) : (520093696))))));
        arr_28 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_15 [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5609)))));
    }
    for (unsigned short i_6 = 3; i_6 < 7; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            for (unsigned short i_8 = 2; i_8 < 6; i_8 += 3) 
            {
                {
                    arr_35 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)64969))))), (((4539628424389459968LL) % (4539628424389459968LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-54)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-25454))))))))) : (-2083260945425636034LL)));
                    arr_36 [i_7] [i_8] [i_8] = arr_3 [i_7];
                    arr_37 [i_7] [(signed char)6] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_6] [i_7])) || (((/* implicit */_Bool) -4539628424389459975LL))))), (((((/* implicit */_Bool) 1073741823U)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16807)))))))) ? ((~(var_3))) : (((((/* implicit */_Bool) 6861469438387523861LL)) ? (14093044283954805019ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23927)))))));
                    arr_38 [i_6 - 1] [i_7] [i_6 - 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(11663213909141267804ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_0), (((unsigned short) (unsigned short)3584)))))) : (min((arr_33 [i_8 + 4] [i_8] [(_Bool)1] [i_7]), (((/* implicit */long long int) arr_11 [i_8 + 4] [(signed char)4] [i_8 - 1]))))));
                }
            } 
        } 
        arr_39 [i_6 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1547028333)) ? (-1) : (((/* implicit */int) (_Bool)1))));
        arr_40 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_15 [i_6 - 2] [i_6 + 3]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)227)))))) ? (max((((/* implicit */unsigned long long int) arr_13 [i_6 + 1])), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) -4539628424389459984LL)) : (var_7))))) : (((((/* implicit */_Bool) (+(var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_32 [(signed char)1] [i_6] [i_6 - 1])))) : (((((/* implicit */_Bool) -4539628424389459959LL)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128)))))))));
        arr_41 [i_6 - 1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) > (arr_9 [i_6] [i_6])));
    }
    var_16 = ((/* implicit */unsigned short) (+(var_15)));
    var_17 = ((/* implicit */int) ((min((((((/* implicit */_Bool) var_14)) ? (var_8) : (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_15))))))) > (max((min((((/* implicit */unsigned long long int) (signed char)72)), (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)32)) && (((/* implicit */_Bool) (signed char)-50)))))))));
}
